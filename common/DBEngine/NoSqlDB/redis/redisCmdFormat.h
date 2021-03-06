/*
 * =====================================================================================
 *
 *       Filename:  redisCmdFormat.h
 *
 *    Description:  redisCmdFormat
 *
 *        Version:  1.0
 *        Created:  03/10/2017 04:22:57 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  huangyun.goddard (), 895175589@qq.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef __REDISCMDFORMAT_H__
#define __REDISCMDFORMAT_H__

namespace goddard
{
/* keys */
#define DEL_KEY_FORMAT "DEL %s"
#define EXISTS_KEY_FORMAT "EXISTS %s"
#define EXPIRE_KEY_FORMAT "EXPIRE %s %u"
#define EXPIRE_AT_KEY_FORMAT "EXPIREAT %s %u"
#define PEXPIRE_KEY_FORMAT "PEXPIRE %s %llu"
#define PEXPIRE_AT_KEY_FORMAT "PEXPIREAT %s %llu"
#define TTL_KEY_FORMAT "TTL %s"
#define PTTL_KEY_FORMAT "PTTL %s"
#define TYPE_KEY_FORMAT "TYPE %s"
//#define KEYS_KEY_FORMAT "KEYS %s"
//#define RANDONKEY_KEY_FORMAT "RANDOMKEY"
//#define SORT_KEY_FORMAT "SORT %s"
//#define SORTDESC_KEY_FORMAT "SORT %s DESC"
//#define SORTALPHA_KEY_FORMAT "SORT %s ALPHA"
//#define SORTLIMIT_KEY_FORMAT "SORT %s LIMIT %d %d"
//#define SORTBY_KEY_FORMAT "SORT %s BY %s"
//#define SORTGET_KEY_FORMAT "SORT %s GET %s"
/* end keys */


/* string */
#define DECR_STRING_FORMAT "DECR %s"
#define DECRBY_STRING_FORMAT "DECRBY %s %lld"
#define GET_STRING_FORMAT "GET %s"
//#define GETRANGE_STRING_FORMAT "GETRANGE %s %d %d"
#define INCR_STRING_FORMAT "INCR %s"
#define INCRBY_STRING_FORMAT "INCRBY %s %lld"
//#define INCRBYFLOAT_STRING_FORMAT "INCRBYFLOAT %s %lf"
//#define MGET_STRING_FORMAT "MGET "
//#define MGET_STRING_FORMAT_PART " %s "
//#define MSET_STRING_FORMAT "MSET"
//#define MSET_STRING_FORMAT_PART " %s %b "
//#define PSETEX_STRING_FORMAT "PSETEX %s %llu %b"
#define SET_STRING_FORMAT "SET %s %b"
//#define SETEX_STRING_FORMAT "SETEX %s %llu %b"
//#define SETRANGE_STRING_FORMAT "SETRANGE %s %u %b"
/* end string */

/* hash */
#define HDEL_HASH_FORMAT "HDEL %s %s"
#define HEXISTS_HASH_FORMAT "HEXISTS %s %s"
#define HGET_HASH_FORMAT "HGET %s %s"
#define HGETALL_HASH_FORMAT "HGETALL %s"
//#define HINCRBY_HASH_FORMAT "HINCRBY %s %s %llu"
//#define HINCRBYFLOAT_HASH_FORMAT "HINCRBYFLOAT %s %s %lf"
#define HKEYS_HASH_FORMAT "HKEYS %s"
#define HLEN_HASH_FORMAT "HLEN %s"
//#define HMGET_HASH_FORMAT "HMGET %s"
//#define HMGET_HASH_FORMAT_PART " %s"
//#define HMSET_HASH_FORMAT "HMSET %s"
//#define HMSET_HASH_FORMAT_PART " %s"
#define HSET_HASH_FORMAT "HSET %s %s %b"
//#define HSETNX_HASH_FORMAT "HSETNX %s %s %b"
#define HVALS_HASH_FORMAT "HVALS %s"
#define HSTRLEN_HASH_FORMAT "HSTRLEN %s %s"
/* end hash */

/* list */
//#define BLPOP_LIST_FORMAT "BLPOP %s %llu"
//#define BRPOP_LIST_FORMAT "BRPOP %s %llu"
//#define BRPOPLPUSH_LIST_FORMAT "BRPOPLPUSH %s %s %llu"
#define LINDEX_LIST_FORMAT "LINDEX %s %lld"
//#define LINSERT_BEFORE_LIST_FORMAT "LINSERT %s BEFORE %s %b"
//#define LINSERT_AFTER_LIST_FORMAT "LINSERT %s AFTER %s %b"
#define LLEN_LIST_FORMAT "LLEN %s"
#define LPOP_LIST_FORMAT "LPOP %s"
#define LPUSH_LIST_FORMAT "LPUSH %s %b"
//#define LPUSHX_LIST_FORMAT "LPUSHX %s %b"
#define LRANGE_LIST_FORMAT "LRANGE %s %lld %lld"
#define LREM_LIST_FORMAT "LREM %s %lld %b"
#define LSET_LIST_FORMAT "LSET %s %lld %b"
#define LTRIM_LIST_FORMAT "LTRIM %s %lld %lld"
#define RPOP_LIST_FORMAT "RPOP %s"
//#define RPOPLPUSH_LIST_FORMAT "RPOPLPUSH %s %s"
#define RPUSH_LIST_FORMAT "RPUSH %s %b"
//#define RPUSHX_LIST_FORMAT "RPUSHX %s %b"
/* end list */

/* set */
//#define SADD_SET_FORMAT "SADD %s %b"
//#define SCARD_SET_FORMAT "SCARD %s"
//#define SDIFF_SET_FORMAT "SDIFF"
//#define SDIFF_SET_FORMAT_PART " %s"
//#define SDIFFSTORE_SET_FORMAT "SDIFF %s"
//#define SDIFFSTORE_SET_FORMAT_PART " %s"
//#define SINTER_SET_FORMAT "SINTER"
//#define SINTER_SET_FORMAT_PART " %s"
//#define SINTERSTORE_SET_FORMAT "SINTERSTORE %s"
//#define SINTERSTORE_SET_FORMAT_PART " %s"
//#define SISMEMBER_SET_FORMAT "SISMEMBER %s %b"
//#define SMEMBERS_SET_FORMAT "SMEMBERS %s"
//#define SMOVE_SET_FORMAT "SMOVE %s %s %b"
//#define SPOP_SET_FORMAT "SPOP %s"
//#define SRANDMEMBER_SET_FORMAT "SRANDMEMBER %s %lld"
//#define SREM_SET_FORMAT "SREM %s %b"
//#define SREM_SET_FORMAT_PART " %b"
//#define SUNION_SET_FORMAT "SUNION"
//#define SUNION_SET_FORMAT_PART " %s"
//#define SUNIONSTORE_SET_FORMAT "SUNIONSTORE %s"
//#define SUNIONSTORE_SET_FORMAT_PART " %s"
/* end set */

/* sortset */
//#define ZADD_SORTSET_FORMAT "ZADD %s %f %b"
//#define ZADD_SORTSET_FORMAT_PART " %f %b"
//#define ZCARD_SORTSET_FORMAT "ZCARD %s"
//#define ZCOUNT_SORTSET_FORMAT "ZCOUNT %s %f %f"
//#define ZINCRBY_SORTSET_FORMAT "ZINCRBY %s %f %b"
//#define ZRANGE_SORTSET_FORMAT "ZRANGE %s %lld %lld"
//#define ZRANGE_WITHSCORES_SORTSET_FORMAT "ZRANGE %s %lld %lld WITHSOCRES"
//#define ZRANGEBYSCORE_SORTSET_FORMAT "ZRANGEBYSCORE %s %f %f"
//#define ZRANGEBYSCORE_WITHSCORES_SORTSET_FORMAT "ZRANGEBYSCORE %s %f %f WITHSOCRES"
//#define ZRANK_SORTSET_FORMAT "ZRANK %s %b"
//#define ZREM_SORTSET_FORMAT "ZREM %s %b"
//#define ZREM_SORTSET_FORMAT_PART " %b"
//#define ZREMRANGEBYRANK_SORTSET_FORMAT "ZREMRANGEBYRANK %s %lld %lld"
//#define ZREMRANGEBYSCORE_SORTSET_FORMAT "ZREMRANGEBYSCORE %s %f %f"
//#define ZREVRANGE_SORTSET_FORMAT "ZREVRANGE %s %lld %lld"
//#define ZREVRANGE_WITHSCORES_SORTSET_FORMAT "ZREVRANGE %s %lld %lld WITHSCORES"
//#define ZREVRANGEBYSCORE_SORTSET_FORMAT "ZREVRANGEBYSCORE %s %f %f"
//#define ZREVRANGEBYSCORE_WITHSCORES_SORTSET_FORMAT "ZREVRANGEBYSCORE %s %f %f WITHSCORES"
//#define ZREVRANK_SORTSET_FORMAT "ZREVRANK %s %b"
//#define ZSCORE_SORTSET_FORMAT "ZSCORE %s %b"
//#define ZUNIONSTORE_SORTSET_FORMAT "ZUNIONSTORE %s %d"
//#define ZUNIONSTORE_SORTSET_FORMAT_PART " %s"
//#define ZINTERSTORE_SORTSET_FORMAT "ZINTERSTORE %s %d"
//#define ZINTERSTORE_SORTSET_FORMAT_PART " %s"
/* end sortset */

/* geo */
//#define GEOADD_GEO_FORMAT "GEOADD %s %f %f %b"
//#define GEOADD_GEO_FORMAT_PART " %f %f %b"
//#define GEOPOS_GEO_FORMAT "GEOPOS %s %b"
//#define GEOPOS_GEO_FORMAT_PART " %b"
//#define GEODIST_GEO_FORMAT "GEODIST %s %b %b m"
//#define GEORADIUS_GEO_FORMAT "GEORADIUS %s %f %f %f m"
//#define GEORADIUS_GEO_FORMAT_PART_WITHCOORD " WITHCOORD"
//#define GEORADIUS_GEO_FORMAT_PART_WITHDIST " WITHDIST"
//#define GEORADIUS_GEO_FORMAT_PART_WITHHASH " WITHHASH"
//#define GEORADIUS_GEO_FORMAT_PART_ASC " ASC"
//#define GEORADIUS_GEO_FORMAT_PART_DESC " DESC"
//#define GEORADIUS_GEO_FORMAT_PART_COUNT " COUNT %lld"
//#define GEORADIUSBYMEMBER_GEO_FORMAT "GEORADIUSBYMEMBER %s %b %f m"
//#define GEORADIUSBYMEMBER_GEO_FORMAT_PART_WITHCOORD " WITHCOORD"
//#define GEORADIUSBYMEMBER_GEO_FORMAT_PART_WITHDIST " WITHDIST"
//#define GEORADIUSBYMEMBER_GEO_FORMAT_PART_WITHHASH " WITHHASH"
//#define GEORADIUSBYMEMBER_GEO_FORMAT_PART_ASC " ASC"
//#define GEORADIUSBYMEMBER_GEO_FORMAT_PART_DESC " DESC"
//#define GEORADIUSBYMEMBER_GEO_FORMAT_PART_COUNT " COUNT %lld"
//#define GEOHASH_GEO_FORMAT "GEOHASH"
//#define GEOHASH_GEO_FORMAT_PART " %b"
/* end geo */

/* transaction */
//#define DISCARD_TRANSCATION_FORMAT "DISCARD"
//#define EXEC_TRANSCATION_FORMAT "EXEC"
//#define MULTI_TRANSCATION_FORMAT "MULTI"
//#define UNWATCH_TRANSCATION_FORMAT "UNWATCH"
//#define WATCH_TRANSCATION_FORMAT "WATCH"
//#define WATCH_TRANSCATION_FORMAT_PART " %s"
/* end transaction */

/* connection */
//#define AUTH_CONNECTION_FORMAT "AUTH %s"
//#define ECHO_CONNECTION_FORMAT "ECHO %s"
//#define PING_CONNECTION_FORMAT "PING"
//#define QUIT_CONNECTION_FORMAT "QUIT"
//#define SELECT_CONNECTION_FORMAT "SELECT %d"
/* end connection */
}

#endif
