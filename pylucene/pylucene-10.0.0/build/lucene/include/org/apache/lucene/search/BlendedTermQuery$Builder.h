#ifndef org_apache_lucene_search_BlendedTermQuery$Builder_H
#define org_apache_lucene_search_BlendedTermQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class TermStates;
      }
      namespace search {
        class BlendedTermQuery$Builder;
        class BlendedTermQuery$RewriteMethod;
        class BlendedTermQuery;
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

        class BlendedTermQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_add_ce8e2f5d1c32cdf4,
            mid_add_dbbf61265922b194,
            mid_add_c8b05ff1b79177e0,
            mid_build_b2c85735bea6ca0d,
            mid_setRewriteMethod_aba6a79542cec499,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BlendedTermQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BlendedTermQuery$Builder(const BlendedTermQuery$Builder& obj) : ::java::lang::Object(obj) {}

          BlendedTermQuery$Builder();

          BlendedTermQuery$Builder add(const ::org::apache::lucene::index::Term &) const;
          BlendedTermQuery$Builder add(const ::org::apache::lucene::index::Term &, jfloat) const;
          BlendedTermQuery$Builder add(const ::org::apache::lucene::index::Term &, jfloat, const ::org::apache::lucene::index::TermStates &) const;
          ::org::apache::lucene::search::BlendedTermQuery build() const;
          BlendedTermQuery$Builder setRewriteMethod(const ::org::apache::lucene::search::BlendedTermQuery$RewriteMethod &) const;
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
        extern PyType_Def PY_TYPE_DEF(BlendedTermQuery$Builder);
        extern PyTypeObject *PY_TYPE(BlendedTermQuery$Builder);

        class t_BlendedTermQuery$Builder {
        public:
          PyObject_HEAD
          BlendedTermQuery$Builder object;
          static PyObject *wrap_Object(const BlendedTermQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
