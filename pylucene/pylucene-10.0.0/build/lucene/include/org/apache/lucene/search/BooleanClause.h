#ifndef org_apache_lucene_search_BooleanClause_H
#define org_apache_lucene_search_BooleanClause_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
        class Query;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BooleanClause : public ::java::lang::Record {
         public:
          enum {
            mid_init$_74bfcb3967db7c38,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_isProhibited_9aa4f33e82ea333f,
            mid_isRequired_9aa4f33e82ea333f,
            mid_isScoring_9aa4f33e82ea333f,
            mid_occur_285e02dfd9c0e1d9,
            mid_query_ffa7bd087b2a75aa,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanClause(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanClause(const BooleanClause& obj) : ::java::lang::Record(obj) {}

          BooleanClause(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::BooleanClause$Occur &);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean isProhibited() const;
          jboolean isRequired() const;
          jboolean isScoring() const;
          ::org::apache::lucene::search::BooleanClause$Occur occur() const;
          ::org::apache::lucene::search::Query query() const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(BooleanClause);
        extern PyTypeObject *PY_TYPE(BooleanClause);

        class t_BooleanClause {
        public:
          PyObject_HEAD
          BooleanClause object;
          static PyObject *wrap_Object(const BooleanClause&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
