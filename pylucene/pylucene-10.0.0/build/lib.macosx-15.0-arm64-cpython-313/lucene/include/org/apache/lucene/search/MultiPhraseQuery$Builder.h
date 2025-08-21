#ifndef org_apache_lucene_search_MultiPhraseQuery$Builder_H
#define org_apache_lucene_search_MultiPhraseQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MultiPhraseQuery;
        class MultiPhraseQuery$Builder;
      }
      namespace index {
        class Term;
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

        class MultiPhraseQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_10c7b880fe7c1ea3,
            mid_add_7d8044c01963e52a,
            mid_add_cd895832ef5b026a,
            mid_add_3d49a9a09324454e,
            mid_build_ff632a030bc0595f,
            mid_setSlop_bcdc79c6822481d6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiPhraseQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiPhraseQuery$Builder(const MultiPhraseQuery$Builder& obj) : ::java::lang::Object(obj) {}

          MultiPhraseQuery$Builder();
          MultiPhraseQuery$Builder(const ::org::apache::lucene::search::MultiPhraseQuery &);

          MultiPhraseQuery$Builder add(const JArray< ::org::apache::lucene::index::Term > &) const;
          MultiPhraseQuery$Builder add(const ::org::apache::lucene::index::Term &) const;
          MultiPhraseQuery$Builder add(const JArray< ::org::apache::lucene::index::Term > &, jint) const;
          ::org::apache::lucene::search::MultiPhraseQuery build() const;
          MultiPhraseQuery$Builder setSlop(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiPhraseQuery$Builder);
        extern PyTypeObject *PY_TYPE(MultiPhraseQuery$Builder);

        class t_MultiPhraseQuery$Builder {
        public:
          PyObject_HEAD
          MultiPhraseQuery$Builder object;
          static PyObject *wrap_Object(const MultiPhraseQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
