/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _FILE_H_RPCGEN
#define _FILE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define BUFSIZE 1024

typedef char *mystring;

struct myres {
	int sz;
	mystring content;
};
typedef struct myres myres;

// download files from server
#define RFILEPROGA 0x30090949
// upload files to server
#define RFILEPROGB 0x30090950

#define RFILEVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define CHECKFILENAME 1
extern  int * checkfilename_1(char **, CLIENT *);
extern  int * checkfilename_1_svc(char **, struct svc_req *);
#define FILEREAD 2
extern  myres * fileread_1(char **, CLIENT *);
extern  myres * fileread_1_svc(char **, struct svc_req *);
extern int rfileprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define CHECKFILENAME 1
extern  int * checkfilename_1();
extern  int * checkfilename_1_svc();
#define FILEREAD 2
extern  myres * fileread_1();
extern  myres * fileread_1_svc();
extern int rfileprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_mystring (XDR *, mystring*);
extern  bool_t xdr_myres (XDR *, myres*);

#else /* K&R C */
extern bool_t xdr_mystring ();
extern bool_t xdr_myres ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FILE_H_RPCGEN */
