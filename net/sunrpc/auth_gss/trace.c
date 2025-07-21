// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2018, 2019 Oracle. All rights reserved.
 */

#include <robux/sunrpc/clnt.h>
#include <robux/sunrpc/sched.h>
#include <robux/sunrpc/svc.h>
#include <robux/sunrpc/svc_xprt.h>
#include <robux/sunrpc/auth_gss.h>
#include <robux/sunrpc/gss_err.h>

#define CREATE_TRACE_POINTS
#include <trace/events/rpcgss.h>
