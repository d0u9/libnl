/* SPDX-License-Identifier: LGPL-2.1-only */
/*
 * Copyright (c) 2003-2011 Thomas Graf <tgraf@suug.ch>
 */

#ifndef NETLINK_SFQ_H_
#define NETLINK_SFQ_H_

#include <netlink/netlink.h>
#include <netlink/route/qdisc.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void	rtnl_sfq_set_quantum(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_quantum(struct rtnl_qdisc *);

extern void	rtnl_sfq_set_limit(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_limit(struct rtnl_qdisc *);

extern void	rtnl_sfq_set_perturb(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_perturb(struct rtnl_qdisc *);

extern int	rtnl_sfq_get_divisor(struct rtnl_qdisc *);

#ifdef __cplusplus
}
#endif

#endif
