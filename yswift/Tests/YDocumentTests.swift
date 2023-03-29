import Foundation
import XCTest
@testable import YSwift

class YDocumentTests: XCTestCase {
    
//    func test_nestedTransactionCall() {
//        let document = YDocument()
//        let someText = document.getOrCreateText(named: "example")
//
//        document.transact { txn1 in
//            someText.append(tx: txn1, text: "123")
//            document.transact { txn2 in
//                someText.append(tx: txn2, text: "asd")
//            }
//        }
//    }
    
    func test_localAndRemoteSyncing() {
        let localDocument = YDocument()
        let localText = localDocument.getOrCreateText(named: "example")
        localDocument.transactSync { txn in
            localText.append(text: "hello, world!", transaction: txn)
        }

        let remoteDocument = YDocument()
        let remoteText = remoteDocument.getOrCreateText(named: "example")

        let remoteState = remoteDocument.transactSync { txn in
            txn.transactionStateVector()
        }
        let updateRemote = localDocument.transactSync { txn in
            localDocument.diff(txn: txn, from: remoteState)
        }
        remoteDocument.transactSync { txn in
            try! txn.transactionApplyUpdate(update: updateRemote)
        }

        let localString = localDocument.transactSync { txn in
            localText.getString(transaction: txn)
        }

        let remoteString = remoteDocument.transactSync { txn in
            remoteText.getString(transaction: txn)
        }

        XCTAssertEqual(localString, remoteString)
    }

    func test_localAndRemoteEditingAndSyncing() {
        let localDocument = YDocument()
        let localText = localDocument.getOrCreateText(named: "example")
        localDocument.transactSync { txn in
            localText.append(text: "hello, world!", transaction: txn)
        }

        let remoteDocument = YDocument()
        let remoteText = remoteDocument.getOrCreateText(named: "example")
        remoteDocument.transactSync { txn in
            remoteText.append(text: "123456", transaction: txn)
        }

        let remoteState = remoteDocument.transactSync { txn in
            txn.transactionStateVector()
        }
        let updateRemote = localDocument.transactSync { txn in
            localDocument.diff(txn: txn, from: remoteState)
        }
        remoteDocument.transactSync { txn in
            try! txn.transactionApplyUpdate(update: updateRemote)
        }

        let localState = localDocument.transactSync { txn in
            txn.transactionStateVector()
        }
        let updateLocal = remoteDocument.transactSync { txn in
            localDocument.diff(txn: txn, from: localState)
        }
        localDocument.transactSync { txn in
            try! txn.transactionApplyUpdate(update: updateLocal)
        }

        let localString = localDocument.transactSync { txn in
            localText.getString(transaction: txn)
        }

        let remoteString = remoteDocument.transactSync { txn in
            remoteText.getString(transaction: txn)
        }

        XCTAssertEqual(localString, remoteString)
    }
}
