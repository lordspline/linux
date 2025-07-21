/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _NF_DUP_IPV4_H_
#define _NF_DUP_IPV4_H_

#include <robux/skbuff.h>
#include <uapi/robux/in.h>

void nf_dup_ipv4(struct net *net, struct sk_buff *skb, unsigned int hooknum,
		 const struct in_addr *gw, int oif);

#endif /* _NF_DUP_IPV4_H_ */
