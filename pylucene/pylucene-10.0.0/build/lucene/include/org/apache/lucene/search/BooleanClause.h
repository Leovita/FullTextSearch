#ifndef org_apache_lucene_search_BooleanClause_H
#define org_apache_lucene_search_BooleanClause_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanClause$Occur;
      }
    }
  }
}
namespace java {
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
      namespace search {

        class BooleanClause : public ::java::lang::Record {
         public:
          enum {
            mid_init$_cda4a4dd75c5ba3a,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_isProhibited_947277eca0748c4e,
            mid_isRequired_947277eca0748c4e,
            mid_isScoring_947277eca0748c4e,
            mid_occur_75abc2b8d272b588,
            mid_query_a3eacfacada795d4,
            mid_toString_09a7afff1868fc5e,
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
