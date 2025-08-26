#ifndef org_apache_lucene_search_MultiPhraseQuery$Builder_H
#define org_apache_lucene_search_MultiPhraseQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class MultiPhraseQuery;
        class MultiPhraseQuery$Builder;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_7c4daf90227e5135,
            mid_add_2749e5020375efd2,
            mid_add_056eb2471f68f5e6,
            mid_add_fca7fe25aecf19e4,
            mid_build_b008d997345be3d9,
            mid_setSlop_0bbcafe3777e1cd5,
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
