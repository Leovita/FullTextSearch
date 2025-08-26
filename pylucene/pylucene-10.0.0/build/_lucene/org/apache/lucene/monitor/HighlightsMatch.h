#ifndef org_apache_lucene_monitor_HighlightsMatch_H
#define org_apache_lucene_monitor_HighlightsMatch_H

#include "org/apache/lucene/monitor/QueryMatch.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class HighlightsMatch$Hit;
        class MatcherFactory;
        class HighlightsMatch;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace util {
    class Map;
    class Collection;
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class HighlightsMatch : public ::org::apache::lucene::monitor::QueryMatch {
         public:
          enum {
            mid_equals_00d17418847797d4,
            mid_getFields_79131c6bbcf08916,
            mid_getHitCount_bd89ce15dad49192,
            mid_getHits_5004bdf19ed33453,
            mid_getHits_4526d55340242234,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HighlightsMatch(jobject obj) : ::org::apache::lucene::monitor::QueryMatch(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HighlightsMatch(const HighlightsMatch& obj) : ::org::apache::lucene::monitor::QueryMatch(obj) {}

          static ::org::apache::lucene::monitor::MatcherFactory *MATCHER;

          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Set getFields() const;
          jint getHitCount() const;
          ::java::util::Map getHits() const;
          ::java::util::Collection getHits(const ::java::lang::String &) const;
          jint hashCode() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(HighlightsMatch);
        extern PyTypeObject *PY_TYPE(HighlightsMatch);

        class t_HighlightsMatch {
        public:
          PyObject_HEAD
          HighlightsMatch object;
          static PyObject *wrap_Object(const HighlightsMatch&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
