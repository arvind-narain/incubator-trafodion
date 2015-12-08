/**********************************************************************
// @@@ START COPYRIGHT @@@
//
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
// @@@ END COPYRIGHT @@@
**********************************************************************/
/*
 * !STDEXC Result Status Definitions
 *
 * Generated by rsg from: 
 * 
 * $RCSfile: glu_stdexc.rsg $$Revision: 1.13 $$Date: 1998/02/08 07:42:40 $
 *
 */
#ifndef GLU_STDEXC_H
#define GLU_STDEXC_H
/*                           
 * !Definition of GLU_exception_nr 
 *                           
 */                          
 
#include <idltype.h>
typedef IDL_long GLU_exception_nr;
/*                           
 *                           
 * 
 * !STDEXC_SUCCESS
 * 
 * - operation completed successfully 
 * 
 * 
 * !STDEXC_UNKNOWN
 * 
 * - unknown error [CORBA::UNKNOWN] 
 * 
 * Unknown exception: catch-all, used to 
 * indicate that the operation failed in some 
 * (unexpected) way. 
 * 
 * !STDEXC_BADOBJREF
 * 
 * - invalid object reference 
 *   [CORBA::INV_OBJREF] 
 * 
 * 
 * !STDEXC_BADPROXY
 * 
 * - invalid proxy object 
 * 
 * Bad proxy object specified. 
 * 
 * !STDEXC_BADPV
 * 
 * - proxy/interface mismatch 
 * 
 * Parameter vector does not match interface 
 * definition (can result from calling an 
 * operation using wrong interface/proxy). 
 * 
 * !STDEXC_BADREQHEADER
 * 
 * - invalid request header received 
 * 
 * 
 * !STDEXC_BADREQSEQSIZE
 * 
 * - request had invalid sequence size 
 * 
 * Request contained a sequence with a larger 
 * number of occurrences than specified in 
 * the interface definition. 
 * 
 * !STDEXC_BADREQSTRSIZE
 * 
 * - request had invalid string size 
 * 
 * Request contained a string with a larger 
 * number of occurrences than specified in 
 * the interface definition. 
 * 
 * !STDEXC_BADREQVERSION
 * 
 * - unsupported request version 
 * 
 * Request header has incompatible version. 
 * 
 * !STDEXC_BADRSPHEADER
 * 
 * - invalid response header received 
 * 
 * 
 * !STDEXC_BADRSPSEQSIZE
 * 
 * - response had invalid sequence size 
 * 
 * Response contained a sequence with a 
 * larger number of occurrences than 
 * specified in the interface definition. 
 * 
 * !STDEXC_BADRSPSTRSIZE
 * 
 * - response had invalid string size 
 * 
 * Response contained a string with a larger 
 * number of occurrences than specified in 
 * the interface definition. 
 * 
 * !STDEXC_BADRSPVERSION
 * 
 * - unsupported response version 
 * 
 * Response header has incompatible version. 
 * 
 * !STDEXC_BAD_CONTEXT
 * 
 * - error processing context object 
 * 
 * 
 * !STDEXC_BAD_INV_ORDER
 * 
 * - routine invocations out of order 
 * 
 * 
 * !STDEXC_BAD_PARAM
 * 
 * - an invalid parameter was passed 
 * 
 * 
 * !STDEXC_BAD_TYPECODE
 * 
 * - bad typecode (CIN) 
 * 
 * 
 * !STDEXC_CLIENTFAIL
 * 
 * - client failed 
 * 
 * Operation failed due to (unexpected) 
 * client failure. 
 * 
 * !STDEXC_CLIRESALLOCFAIL
 * 
 * - client unable to allocate resources 
 *   [CORBA::NO_MEMORY] 
 * 
 * Client unable to allocate resources to 
 * invoke operation. 
 * 
 * !STDEXC_FREE_MEM
 * 
 * - cannot free memory 
 * 
 * 
 * !STDEXC_IMP_LIMIT
 * 
 * - violated implementation limit 
 * 
 * 
 * !STDEXC_INITIALIZE
 * 
 * - ORB initialization failure 
 * 
 * 
 * !STDEXC_INTERNAL
 * 
 * - ORB internal error 
 * 
 * 
 * !STDEXC_INTF_REPOS
 * 
 * - error accessing interface repository 
 * 
 * 
 * !STDEXC_INVALID_TRANSACTION
 * 
 * - transaction associated with request is 
 *   invalid 
 * 
 * Any operation can raise the 
 * "INVALID_TRANSACTION" exception to 
 * indicate the request carried an invalid 
 * transaction context. For example, this 
 * exception could be raised if an error 
 * occurred when trying to register a 
 * resource. 
 * 
 * !STDEXC_INV_FLAG
 * 
 * - invalid flag was specified 
 * 
 * 
 * !STDEXC_INV_IDENT
 * 
 * - invalid identifier syntax 
 * 
 * 
 * !STDEXC_LONGREQUEST
 * 
 * - request had unexpected length (too long) 
 * 
 * Request message longer than expected from 
 * interface definition. 
 * 
 * !STDEXC_LONGRESPONSE
 * 
 * - response had unexpected length (too long) 
 * 
 * Response message longer than expected from 
 * interface definition. 
 * 
 * !STDEXC_MARSHAL
 * 
 * - error marshalling param/result 
 * 
 * 
 * !STDEXC_NOSUCHOBJ
 * 
 * - object does not exist 
 *   [CORBA::OBJECT_NOT_EXIST] 
 * 
 * 
 * !STDEXC_NOSUCHOP
 * 
 * - operation not defined for this interface 
 *   [CORBA::BAD_OPERATION] 
 * 
 * Interface does not define the requested 
 * operation. 
 * 
 * !STDEXC_NOTSYNCHRONOUS
 * 
 * - disallowed synchronous call 
 * 
 * Object cannot be called synchronously. 
 * 
 * !STDEXC_NO_PERMISSION
 * 
 * - no permission for attempted operation 
 * 
 * 
 * !STDEXC_NO_RESPONSE
 * 
 * - response to request not yet available 
 * 
 * 
 * !STDEXC_OBJ_ADAPTER
 * 
 * - failure detected by object adapter 
 * 
 * 
 * !STDEXC_OPNOTIMPL
 * 
 * - operation not implemented by server 
 *   [CORBA::NO_IMPLEMENT] 
 * 
 * Interface defines the requested operation 
 * but the server does not implement it. 
 * 
 * !STDEXC_PERSIST_STORE
 * 
 * - persistent storage failure 
 * 
 * 
 * !STDEXC_PROXYINUSE
 * 
 * - call already outstanding on proxy 
 * 
 * Object call outstanding on specified 
 * proxy. 
 * 
 * !STDEXC_PROXYSTALE
 * 
 * - proxy no longer valid 
 * 
 * Object represented by specified proxy no 
 * longer exists. 
 * 
 * !STDEXC_REQSVCCTXBAD
 * 
 * - unable to unmarshal request service 
 *   context 
 * 
 * Error unmarshalling a request service 
 * context element. 
 * 
 * !STDEXC_REQSVCCTXTOOBIG
 * 
 * - not enough room to unpack request service 
 *   context 
 * 
 * Unable to unpack the service context, 
 * because the internal buffer was too small. 
 * Increase 
 * "CEECFG_MaxServiceContextListLength". 
 * 
 * !STDEXC_REQSVCCTXUNKNOWN
 * 
 * - request service context contains unknown 
 *   type 
 * 
 * The server does not know how to handle one 
 * or more of the elements in the service 
 * context list contained in the request 
 * header. 
 * 
 * !STDEXC_REQTOOBIG
 * 
 * - request too big 
 * 
 * 
 * !STDEXC_RSPSTATUSUNKNOWN
 * 
 * - response status value unknown 
 * 
 * The client does not know how to handle the 
 * response status contained in the reply 
 * header. 
 * 
 * !STDEXC_RSPSVCCTXBAD
 * 
 * - unable to unmarshal response service 
 *   context 
 * 
 * Error unmarshalling a response service 
 * context element. 
 * 
 * !STDEXC_RSPSVCCTXTOOBIG
 * 
 * - not enough room to unpack response service 
 *   context 
 * 
 * Unable to unpack the service context, 
 * because the internal buffer was too small. 
 * Increase 
 * "CEECFG_MaxServiceContextListLength". 
 * 
 * !STDEXC_RSPSVCCTXUNKNOWN
 * 
 * - response service context contains unknown 
 *   type 
 * 
 * The client does not know how to handle one 
 * or more of the elements in the service 
 * context list contained in the reply 
 * header. 
 * 
 * !STDEXC_RSPTOOBIG
 * 
 * - response too big 
 * 
 * 
 * !STDEXC_SERVERFAIL
 * 
 * - server failed 
 * 
 * Operation failed due to (unexpected) 
 * server failure. 
 * 
 * !STDEXC_SHORTREQUEST
 * 
 * - request had unexpected length (too short) 
 * 
 * Request message shorter than expected from 
 * interface definition. 
 * 
 * !STDEXC_SHORTRESPONSE
 * 
 * - response had unexpected length (too short) 
 * 
 * Response message shorter than expected 
 * from interface definition. 
 * 
 * !STDEXC_SRVRESALLOCFAIL
 * 
 * - server unable to allocate resources 
 *   [CORBA::NO_RESOURCES] 
 * 
 * Server unable to allocate resources to 
 * invoke operation. 
 * 
 * !STDEXC_TRANSACTION_REQUIRED
 * 
 * - operation requires active transaction 
 * 
 * Any operation can raise the 
 * "TRANSACTION_REQUIRED" exception to 
 * indicate that the request carried a null 
 * transaction context, but an active 
 * transaction is required. 
 * 
 * !STDEXC_TRANSACTION_ROLLEDBACK
 * 
 * - transaction associated with request was 
 *   rolled back 
 * 
 * Any operation can raise the 
 * "TRANSACTION_ROLLEDBACK" exception to 
 * indicate the transaction associated with 
 * the request has already been rolled back 
 * or marked to rollback; thus, the requested 
 * operation either could not be performed or 
 * was not performed because further 
 * computation on behalf of the transaction 
 * would be fruitless. 
 * 
 * !STDEXC_TRANSIENT
 * 
 * - transient failure - reissue request 
 * 
 * 
 * !STDEXC_TRANSPORT
 * 
 * - transport failure [CORBA::COMM_FAILURE] 
 * 
 * 
 * !STDEXC_UNIMPLCONV
 * 
 * - unimplemented conversion 
 *   [CORBA::DATA_CONVERSION] 
 * 
 * Unimplemented data type conversion, e.g. 
 * IEEE float to T16 float format. 
 * 
 * !STDEXC_WRONG_TRANSACTION
 * 
 * - transaction context mismatch on get of 
 *   deferred synchronous response 
 * 
 * This exception can be raised only if the 
 * request is implicitly associated with a 
 * transaction (the current transaction at 
 * the time the request was issued). The 
 * "get_response" operation (defined on the 
 * Request interface) may raise the 
 * WRONG_TRANSACTION exception if the 
 * trnsaction associated with the request is 
 * not the same as the transaction associated 
 * with the thread invoking "get_response. 
 * The "get_next_response" operation (defined 
 * in the ORB interface) may raise the 
 * WRONG_TRANSACTION exception if the thread 
 * invoking get_next_response has a non-null 
 * current transaction that is different than 
 * the one associated with the request 
 */
 
#define STDEXC_RSPSTATUSUNKNOWN         ((GLU_exception_nr) -58)
#define STDEXC_RSPSVCCTXBAD             ((GLU_exception_nr) -57)
#define STDEXC_REQSVCCTXBAD             ((GLU_exception_nr) -56)
#define STDEXC_RSPSVCCTXUNKNOWN         ((GLU_exception_nr) -55)
#define STDEXC_REQSVCCTXUNKNOWN         ((GLU_exception_nr) -54)
#define STDEXC_RSPSVCCTXTOOBIG          ((GLU_exception_nr) -53)
#define STDEXC_REQSVCCTXTOOBIG          ((GLU_exception_nr) -52)
#define STDEXC_WRONG_TRANSACTION        ((GLU_exception_nr) -51)
#define STDEXC_INVALID_TRANSACTION      ((GLU_exception_nr) -50)
#define STDEXC_TRANSACTION_ROLLEDBACK   ((GLU_exception_nr) -49)
#define STDEXC_TRANSACTION_REQUIRED     ((GLU_exception_nr) -48)
#define STDEXC_OBJ_ADAPTER              ((GLU_exception_nr) -47)
#define STDEXC_BAD_CONTEXT              ((GLU_exception_nr) -46)
#define STDEXC_INTF_REPOS               ((GLU_exception_nr) -45)
#define STDEXC_INV_FLAG                 ((GLU_exception_nr) -44)
#define STDEXC_INV_IDENT                ((GLU_exception_nr) -43)
#define STDEXC_FREE_MEM                 ((GLU_exception_nr) -42)
#define STDEXC_TRANSIENT                ((GLU_exception_nr) -41)
#define STDEXC_BAD_INV_ORDER            ((GLU_exception_nr) -40)
#define STDEXC_PERSIST_STORE            ((GLU_exception_nr) -39)
#define STDEXC_NO_RESPONSE              ((GLU_exception_nr) -38)
#define STDEXC_BAD_TYPECODE             ((GLU_exception_nr) -37)
#define STDEXC_INITIALIZE               ((GLU_exception_nr) -36)
#define STDEXC_MARSHAL                  ((GLU_exception_nr) -35)
#define STDEXC_INTERNAL                 ((GLU_exception_nr) -34)
#define STDEXC_NO_PERMISSION            ((GLU_exception_nr) -33)
#define STDEXC_IMP_LIMIT                ((GLU_exception_nr) -32)
#define STDEXC_BAD_PARAM                ((GLU_exception_nr) -31)
#define STDEXC_UNIMPLCONV               ((GLU_exception_nr) -30)
#define STDEXC_TRANSPORT                ((GLU_exception_nr) -29)
#define STDEXC_BADOBJREF                ((GLU_exception_nr) -28)
#define STDEXC_NOSUCHOBJ                ((GLU_exception_nr) -27)
#define STDEXC_BADPV                    ((GLU_exception_nr) -26)
#define STDEXC_NOTSYNCHRONOUS           ((GLU_exception_nr) -25)
#define STDEXC_PROXYSTALE               ((GLU_exception_nr) -24)
#define STDEXC_PROXYINUSE               ((GLU_exception_nr) -23)
#define STDEXC_BADPROXY                 ((GLU_exception_nr) -22)
#define STDEXC_BADRSPSTRSIZE            ((GLU_exception_nr) -21)
#define STDEXC_BADREQSTRSIZE            ((GLU_exception_nr) -20)
#define STDEXC_BADRSPSEQSIZE            ((GLU_exception_nr) -19)
#define STDEXC_BADREQSEQSIZE            ((GLU_exception_nr) -18)
#define STDEXC_SHORTRESPONSE            ((GLU_exception_nr) -17)
#define STDEXC_SHORTREQUEST             ((GLU_exception_nr) -16)
#define STDEXC_LONGRESPONSE             ((GLU_exception_nr) -15)
#define STDEXC_LONGREQUEST              ((GLU_exception_nr) -14)
#define STDEXC_BADRSPVERSION            ((GLU_exception_nr) -13)
#define STDEXC_BADREQVERSION            ((GLU_exception_nr) -12)
#define STDEXC_BADRSPHEADER             ((GLU_exception_nr) -11)
#define STDEXC_BADREQHEADER             ((GLU_exception_nr) -10)
#define STDEXC_OPNOTIMPL                ((GLU_exception_nr) -9)
#define STDEXC_NOSUCHOP                 ((GLU_exception_nr) -8)
#define STDEXC_RSPTOOBIG                ((GLU_exception_nr) -7)
#define STDEXC_REQTOOBIG                ((GLU_exception_nr) -6)
#define STDEXC_SRVRESALLOCFAIL          ((GLU_exception_nr) -5)
#define STDEXC_CLIRESALLOCFAIL          ((GLU_exception_nr) -4)
#define STDEXC_SERVERFAIL               ((GLU_exception_nr) -3)
#define STDEXC_CLIENTFAIL               ((GLU_exception_nr) -2)
#define STDEXC_UNKNOWN                  ((GLU_exception_nr) -1)
#define STDEXC_SUCCESS                  ((GLU_exception_nr)  0)

#ifdef __cplusplus
extern "C" {
#endif
/*
   GLU_STDEXC_TO_TEXT converts a result status to a string.

   <rs>				result status to convert

   <=description>   	    	human-readable string for "rs"
   */
extern
char *
GLU_STDEXC_TO_TEXT(GLU_exception_nr rs);

#ifdef __cplusplus
}
#endif
#endif /* GLU_STDEXC_H */
