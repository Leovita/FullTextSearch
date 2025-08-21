#ifndef org_apache_lucene_search_BooleanQuery$Builder_H
#define org_apache_lucene_search_BooleanQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanQuery$Builder;
        class BooleanQuery;
        class BooleanClause;
        class BooleanClause$Occur;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BooleanQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_add_2b4730fea7115eb2,
            mid_add_810c2b3ea4c420f9,
            mid_build_3eae9b713ba41739,
            mid_setMinimumNumberShouldMatch_aa5bbea7a2e9bcc2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanQuery$Builder(const BooleanQuery$Builder& obj) : ::java::lang::Object(obj) {}

          BooleanQuery$Builder();

          BooleanQuery$Builder add(const ::org::apache::lucene::search::BooleanClause &) const;
          BooleanQuery$Builder add(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::BooleanClause$Occur &) const;
          ::org::apache::lucene::search::BooleanQuery build() const;
          BooleanQuery$Builder setMinimumNumberShouldMatch(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(BooleanQuery$Builder);
        extern PyTypeObject *PY_TYPE(BooleanQuery$Builder);

        class t_BooleanQuery$Builder {
        public:
          PyObject_HEAD
          BooleanQuery$Builder object;
          static PyObject *wrap_Object(const BooleanQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
