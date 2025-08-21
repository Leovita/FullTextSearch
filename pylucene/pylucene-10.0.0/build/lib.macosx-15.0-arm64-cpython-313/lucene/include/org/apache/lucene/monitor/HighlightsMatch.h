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
  namespace util {
    class Collection;
    class Set;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
    class Object;
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
            mid_equals_570b5248a6da3ef6,
            mid_getFields_4df174295554d7bd,
            mid_getHitCount_20fbf7565993c3d7,
            mid_getHits_f125f26c07a7bec8,
            mid_getHits_7b9bda226d3b86c7,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
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
