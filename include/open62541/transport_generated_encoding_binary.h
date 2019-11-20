/* Generated from Opc.Ua.Types.bsd, Custom.Opc.Ua.Transport.bsd with script /root/workspace/gitlab/unikraft/external/open62541-9f1cbfa96fd050220c86d3e5939d88cab1b680ce/tools/generate_datatypes.py
 * on host c431 by user root at 2019-10-01 10:24:46 */

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "transport_generated.h"
#endif



/* SecureConversationMessageAbortBody */
static UA_INLINE size_t
UA_SecureConversationMessageAbortBody_calcSizeBinary(const UA_SecureConversationMessageAbortBody *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_SECURECONVERSATIONMESSAGEABORTBODY]);
}
static UA_INLINE UA_StatusCode
UA_SecureConversationMessageAbortBody_encodeBinary(const UA_SecureConversationMessageAbortBody *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_SECURECONVERSATIONMESSAGEABORTBODY], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SecureConversationMessageAbortBody_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SecureConversationMessageAbortBody *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_SECURECONVERSATIONMESSAGEABORTBODY], NULL);
}

/* SecureConversationMessageFooter */
static UA_INLINE size_t
UA_SecureConversationMessageFooter_calcSizeBinary(const UA_SecureConversationMessageFooter *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_SECURECONVERSATIONMESSAGEFOOTER]);
}
static UA_INLINE UA_StatusCode
UA_SecureConversationMessageFooter_encodeBinary(const UA_SecureConversationMessageFooter *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_SECURECONVERSATIONMESSAGEFOOTER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SecureConversationMessageFooter_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SecureConversationMessageFooter *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_SECURECONVERSATIONMESSAGEFOOTER], NULL);
}

/* TcpHelloMessage */
static UA_INLINE size_t
UA_TcpHelloMessage_calcSizeBinary(const UA_TcpHelloMessage *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_TCPHELLOMESSAGE]);
}
static UA_INLINE UA_StatusCode
UA_TcpHelloMessage_encodeBinary(const UA_TcpHelloMessage *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_TCPHELLOMESSAGE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TcpHelloMessage_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TcpHelloMessage *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_TCPHELLOMESSAGE], NULL);
}

/* TcpErrorMessage */
static UA_INLINE size_t
UA_TcpErrorMessage_calcSizeBinary(const UA_TcpErrorMessage *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_TCPERRORMESSAGE]);
}
static UA_INLINE UA_StatusCode
UA_TcpErrorMessage_encodeBinary(const UA_TcpErrorMessage *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_TCPERRORMESSAGE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TcpErrorMessage_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TcpErrorMessage *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_TCPERRORMESSAGE], NULL);
}

/* MessageType */
static UA_INLINE size_t
UA_MessageType_calcSizeBinary(const UA_MessageType *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_MESSAGETYPE]);
}
static UA_INLINE UA_StatusCode
UA_MessageType_encodeBinary(const UA_MessageType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_MESSAGETYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MessageType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MessageType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_MESSAGETYPE], NULL);
}

/* AsymmetricAlgorithmSecurityHeader */
static UA_INLINE size_t
UA_AsymmetricAlgorithmSecurityHeader_calcSizeBinary(const UA_AsymmetricAlgorithmSecurityHeader *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_ASYMMETRICALGORITHMSECURITYHEADER]);
}
static UA_INLINE UA_StatusCode
UA_AsymmetricAlgorithmSecurityHeader_encodeBinary(const UA_AsymmetricAlgorithmSecurityHeader *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_ASYMMETRICALGORITHMSECURITYHEADER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AsymmetricAlgorithmSecurityHeader_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AsymmetricAlgorithmSecurityHeader *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_ASYMMETRICALGORITHMSECURITYHEADER], NULL);
}

/* TcpAcknowledgeMessage */
static UA_INLINE size_t
UA_TcpAcknowledgeMessage_calcSizeBinary(const UA_TcpAcknowledgeMessage *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_TCPACKNOWLEDGEMESSAGE]);
}
static UA_INLINE UA_StatusCode
UA_TcpAcknowledgeMessage_encodeBinary(const UA_TcpAcknowledgeMessage *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_TCPACKNOWLEDGEMESSAGE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TcpAcknowledgeMessage_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TcpAcknowledgeMessage *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_TCPACKNOWLEDGEMESSAGE], NULL);
}

/* SequenceHeader */
static UA_INLINE size_t
UA_SequenceHeader_calcSizeBinary(const UA_SequenceHeader *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_SEQUENCEHEADER]);
}
static UA_INLINE UA_StatusCode
UA_SequenceHeader_encodeBinary(const UA_SequenceHeader *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_SEQUENCEHEADER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SequenceHeader_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SequenceHeader *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_SEQUENCEHEADER], NULL);
}

/* TcpMessageHeader */
static UA_INLINE size_t
UA_TcpMessageHeader_calcSizeBinary(const UA_TcpMessageHeader *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_TCPMESSAGEHEADER]);
}
static UA_INLINE UA_StatusCode
UA_TcpMessageHeader_encodeBinary(const UA_TcpMessageHeader *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_TCPMESSAGEHEADER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TcpMessageHeader_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TcpMessageHeader *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_TCPMESSAGEHEADER], NULL);
}

/* ChunkType */
static UA_INLINE size_t
UA_ChunkType_calcSizeBinary(const UA_ChunkType *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_CHUNKTYPE]);
}
static UA_INLINE UA_StatusCode
UA_ChunkType_encodeBinary(const UA_ChunkType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_CHUNKTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ChunkType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ChunkType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_CHUNKTYPE], NULL);
}

/* SymmetricAlgorithmSecurityHeader */
static UA_INLINE size_t
UA_SymmetricAlgorithmSecurityHeader_calcSizeBinary(const UA_SymmetricAlgorithmSecurityHeader *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_SYMMETRICALGORITHMSECURITYHEADER]);
}
static UA_INLINE UA_StatusCode
UA_SymmetricAlgorithmSecurityHeader_encodeBinary(const UA_SymmetricAlgorithmSecurityHeader *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_SYMMETRICALGORITHMSECURITYHEADER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SymmetricAlgorithmSecurityHeader_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SymmetricAlgorithmSecurityHeader *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_SYMMETRICALGORITHMSECURITYHEADER], NULL);
}

/* SecureConversationMessageHeader */
static UA_INLINE size_t
UA_SecureConversationMessageHeader_calcSizeBinary(const UA_SecureConversationMessageHeader *src) {
    return UA_calcSizeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_SECURECONVERSATIONMESSAGEHEADER]);
}
static UA_INLINE UA_StatusCode
UA_SecureConversationMessageHeader_encodeBinary(const UA_SecureConversationMessageHeader *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TRANSPORT[UA_TRANSPORT_SECURECONVERSATIONMESSAGEHEADER], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SecureConversationMessageHeader_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SecureConversationMessageHeader *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TRANSPORT[UA_TRANSPORT_SECURECONVERSATIONMESSAGEHEADER], NULL);
}
