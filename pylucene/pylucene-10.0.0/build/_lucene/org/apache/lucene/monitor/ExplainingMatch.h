#ifndef org_apache_lucene_monitor_ExplainingMatch_H
#define org_apache_lucene_monitor_ExplainingMatch_H

#include "org/apache/lucene/monitor/QueryMatch.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
      }
      namespace monitor {
        class ExplainingMatch;
        class MatcherFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class ExplainingMatch : public ::org::apache::lucene::monitor::QueryMatch {
         public:
          enum {
            mid_equals_00d17418847797d4,
            mid_getExplanation_5cd29865fc3d9e1c,
            mid_hashCode_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExplainingMatch(jobject obj) : ::org::apache::lucene::monitor::QueryMatch(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExplainingMatch(const ExplainingMatch& obj) : ::org::apache::lucene::monitor::QueryMatch(obj) {}

          static ::org::apache::lucene::monitor::MatcherFactory *MATCHER;

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::Explanation getExplanation() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(ExplainingMatch);
        extern PyTypeObject *PY_TYPE(ExplainingMatch);

        class t_ExplainingMatch {
        public:
          PyObject_HEAD
          ExplainingMatch object;
          static PyObject *wrap_Object(const ExplainingMatch&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
