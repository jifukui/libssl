/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2020 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OPENSSL_BIOERR_H
# define OPENSSL_BIOERR_H
# pragma once

# include <openssl/opensslconf.h>
# include <openssl/symhacks.h>
# include <openssl/cryptoerr_legacy.h>



/*
 * BIO function codes.
 */
# ifndef OPENSSL_NO_DEPRECATED_3_0
#  define BIO_F_ACPT_STATE                                 0
#  define BIO_F_ADDRINFO_WRAP                              0
#  define BIO_F_ADDR_STRINGS                               0
#  define BIO_F_BIO_ACCEPT                                 0
#  define BIO_F_BIO_ACCEPT_EX                              0
#  define BIO_F_BIO_ACCEPT_NEW                             0
#  define BIO_F_BIO_ADDR_NEW                               0
#  define BIO_F_BIO_BIND                                   0
#  define BIO_F_BIO_CALLBACK_CTRL                          0
#  define BIO_F_BIO_CONNECT                                0
#  define BIO_F_BIO_CONNECT_NEW                            0
#  define BIO_F_BIO_CTRL                                   0
#  define BIO_F_BIO_GETS                                   0
#  define BIO_F_BIO_GET_HOST_IP                            0
#  define BIO_F_BIO_GET_NEW_INDEX                          0
#  define BIO_F_BIO_GET_PORT                               0
#  define BIO_F_BIO_LISTEN                                 0
#  define BIO_F_BIO_LOOKUP                                 0
#  define BIO_F_BIO_LOOKUP_EX                              0
#  define BIO_F_BIO_MAKE_PAIR                              0
#  define BIO_F_BIO_METH_NEW                               0
#  define BIO_F_BIO_NEW                                    0
#  define BIO_F_BIO_NEW_DGRAM_SCTP                         0
#  define BIO_F_BIO_NEW_FILE                               0
#  define BIO_F_BIO_NEW_MEM_BUF                            0
#  define BIO_F_BIO_NREAD                                  0
#  define BIO_F_BIO_NREAD0                                 0
#  define BIO_F_BIO_NWRITE                                 0
#  define BIO_F_BIO_NWRITE0                                0
#  define BIO_F_BIO_PARSE_HOSTSERV                         0
#  define BIO_F_BIO_PUTS                                   0
#  define BIO_F_BIO_READ                                   0
#  define BIO_F_BIO_READ_EX                                0
#  define BIO_F_BIO_READ_INTERN                            0
#  define BIO_F_BIO_SOCKET                                 0
#  define BIO_F_BIO_SOCKET_NBIO                            0
#  define BIO_F_BIO_SOCK_INFO                              0
#  define BIO_F_BIO_SOCK_INIT                              0
#  define BIO_F_BIO_WRITE                                  0
#  define BIO_F_BIO_WRITE_EX                               0
#  define BIO_F_BIO_WRITE_INTERN                           0
#  define BIO_F_BUFFER_CTRL                                0
#  define BIO_F_CONN_CTRL                                  0
#  define BIO_F_CONN_STATE                                 0
#  define BIO_F_DGRAM_SCTP_NEW                             0
#  define BIO_F_DGRAM_SCTP_READ                            0
#  define BIO_F_DGRAM_SCTP_WRITE                           0
#  define BIO_F_DOAPR_OUTCH                                0
#  define BIO_F_FILE_CTRL                                  0
#  define BIO_F_FILE_READ                                  0
#  define BIO_F_LINEBUFFER_CTRL                            0
#  define BIO_F_LINEBUFFER_NEW                             0
#  define BIO_F_MEM_WRITE                                  0
#  define BIO_F_NBIOF_NEW                                  0
#  define BIO_F_SLG_WRITE                                  0
#  define BIO_F_SSL_NEW                                    0
# endif

/*
 * BIO reason codes.
 */
# define BIO_R_ACCEPT_ERROR                               100
# define BIO_R_ADDRINFO_ADDR_IS_NOT_AF_INET               141
# define BIO_R_AMBIGUOUS_HOST_OR_SERVICE                  129
# define BIO_R_BAD_FOPEN_MODE                             101
# define BIO_R_BROKEN_PIPE                                124
# define BIO_R_CONNECT_ERROR                              103
# define BIO_R_CONNECT_TIMEOUT                            147
# define BIO_R_GETHOSTBYNAME_ADDR_IS_NOT_AF_INET          107
# define BIO_R_GETSOCKNAME_ERROR                          132
# define BIO_R_GETSOCKNAME_TRUNCATED_ADDRESS              133
# define BIO_R_GETTING_SOCKTYPE                           134
# define BIO_R_INVALID_ARGUMENT                           125
# define BIO_R_INVALID_SOCKET                             135
# define BIO_R_IN_USE                                     123
# define BIO_R_LENGTH_TOO_LONG                            102
# define BIO_R_LISTEN_V6_ONLY                             136
# define BIO_R_LOOKUP_RETURNED_NOTHING                    142
# define BIO_R_MALFORMED_HOST_OR_SERVICE                  130
# define BIO_R_NBIO_CONNECT_ERROR                         110
# define BIO_R_NO_ACCEPT_ADDR_OR_SERVICE_SPECIFIED        143
# define BIO_R_NO_HOSTNAME_OR_SERVICE_SPECIFIED           144
# define BIO_R_NO_PORT_DEFINED                            113
# define BIO_R_NO_SUCH_FILE                               128
# define BIO_R_NULL_PARAMETER                             115
# define BIO_R_TRANSFER_ERROR                             104
# define BIO_R_TRANSFER_TIMEOUT                           105
# define BIO_R_UNABLE_TO_BIND_SOCKET                      117
# define BIO_R_UNABLE_TO_CREATE_SOCKET                    118
# define BIO_R_UNABLE_TO_KEEPALIVE                        137
# define BIO_R_UNABLE_TO_LISTEN_SOCKET                    119
# define BIO_R_UNABLE_TO_NODELAY                          138
# define BIO_R_UNABLE_TO_REUSEADDR                        139
# define BIO_R_UNAVAILABLE_IP_FAMILY                      145
# define BIO_R_UNINITIALIZED                              120
# define BIO_R_UNKNOWN_INFO_TYPE                          140
# define BIO_R_UNSUPPORTED_IP_FAMILY                      146
# define BIO_R_UNSUPPORTED_METHOD                         121
# define BIO_R_UNSUPPORTED_PROTOCOL_FAMILY                131
# define BIO_R_WRITE_TO_READ_ONLY_BIO                     126
# define BIO_R_WSASTARTUP                                 122

#endif
