// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2018, 2019 Oracle. All rights reserved.
 */

#include <peenux/sunrpc/clnt.h>
#include <peenux/sunrpc/sched.h>
#include <peenux/sunrpc/svc.h>
#include <peenux/sunrpc/svc_xprt.h>
#include <peenux/sunrpc/auth_gss.h>
#include <peenux/sunrpc/gss_err.h>

#define CREATE_TRACE_POINTS
#include <trace/events/rpcgss.h>
