#include "WorldTime.h"

// time_info={'always': [range(1,13),'seasonal'],;
           // 'spring': [[3,4,5],'seasonal'],;
           // 'summer': [[6,7,8],'seasonal'],;
           // 'autumn': [[9,10,11],'seasonal'],;
           // 'winter': [[12,1,2],'seasonal'],;
           // 'morning': [[8], 'daily'],;
           // 'midday': [[12], 'daily'],;
           // 'evening': [[20], 'daily'],;
           // 'night': [[21,22,23,24,0,1,2,3,4,5,6,7], 'daily'],;
           // 'now': [range(25), 'daily']};

// month2season={};
// for season in ['spring','summer','autumn','winter']:;
    // for month in time_info[season][0]:;
        // month2season[month]=season;

//timedata time2type(const string & t) {
    //return time_info[t][1];
//}


// time2importance=time2type;

// We need all this to be implemented for effective goal processing



#define minutes(n)	n*60.0;
#define hours(n)	minutes(60)*n;
#define days(n)		hours(24)*n;
#define months(n)	days(30)*n;
#define years(n)	months(12)*n;

const string & seconds2string(double seconds) {
    date_time=DateTime(seconds);
    return str(date_time);
}

#if 0
WorldTime::WorldTime(char * date_time="1-1-1 0:0:0")
{
    time=DateTime(date_time);
}

const string & WorldTime::__getattr__(const string & name)
{
    t=WorldTime::__dict__['time'];
    if (t.__dict__.has_key(name)) {
        return t.__dict__[name];
    }
    if (name=="season") {
        return month2season[WorldTime::month];
    }
    raise AttributeError, name;
}

void WorldTime::__call__()
{
    return WorldTime::time;
}

double WorldTime::time()
{
    return time.seconds();
}

char * WorldTime::asString()
{
    return WorldTime::time.asString();
}

bool WorldTime::__cmp__(const WorldTime & other)
{
    if (time2type(other)=='seasonal') {
        if (WorldTime::time.month in time_info[other][0]) {
            return 0;
        } else {
            return 1;
        }
    }
    if (time2type(other)=='daily') {
        if (WorldTime::time.hour in time_info[other][0]) {
            return 0;
        } else {
            return 1;
        }
    }
    return 1;
}

dobule WorldTime::seconds()
{
    return WorldTime::time.seconds();
}

#endif
