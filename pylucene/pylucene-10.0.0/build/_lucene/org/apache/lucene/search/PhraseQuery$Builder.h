#ifndef org_apache_lucene_search_PhraseQuery$Builder_H
#define org_apache_lucene_search_PhraseQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class PhraseQuery$Builder;
        class PhraseQuery;
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

        class PhraseQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_add_3b445fdbf3de3ff8,
            mid_add_ea987754201eed6e,
            mid_build_1458757303f2ab55,
            mid_setSlop_30c8538f67b7c96e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseQuery$Builder(const PhraseQuery$Builder& obj) : ::java::lang::Object(obj) {}

          PhraseQuery$Builder();

          PhraseQuery$Builder add(const ::org::apache::lucene::index::Term &) const;
          PhraseQuery$Builder add(const ::org::apache::lucene::index::Term &, jint) const;
          ::org::apache::lucene::search::PhraseQuery build() const;
          PhraseQuery$Builder setSlop(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(PhraseQuery$Builder);
        extern PyTypeObject *PY_TYPE(PhraseQuery$Builder);

        class t_PhraseQuery$Builder {
        public:
          PyObject_HEAD
          PhraseQuery$Builder object;
          static PyObject *wrap_Object(const PhraseQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
