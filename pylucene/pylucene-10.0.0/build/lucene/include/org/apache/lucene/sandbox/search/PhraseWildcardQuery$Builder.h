#ifndef org_apache_lucene_sandbox_search_PhraseWildcardQuery$Builder_H
#define org_apache_lucene_sandbox_search_PhraseWildcardQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class PhraseWildcardQuery$Builder;
          class PhraseWildcardQuery;
        }
      }
      namespace search {
        class MultiTermQuery;
      }
      namespace index {
        class Term;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class PhraseWildcardQuery$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_49e27e98009acf15,
              mid_init$_5a51ba251ddc79d6,
              mid_addMultiTerm_8cc4aa492e6166c9,
              mid_addTerm_d0356717f8e51d7d,
              mid_addTerm_28291ef2a849f245,
              mid_build_351c1d4cd5275eed,
              mid_setSlop_51a97bd193b88e10,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhraseWildcardQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhraseWildcardQuery$Builder(const PhraseWildcardQuery$Builder& obj) : ::java::lang::Object(obj) {}

            PhraseWildcardQuery$Builder(const ::java::lang::String &, jint);
            PhraseWildcardQuery$Builder(const ::java::lang::String &, jint, jboolean);

            PhraseWildcardQuery$Builder addMultiTerm(const ::org::apache::lucene::search::MultiTermQuery &) const;
            PhraseWildcardQuery$Builder addTerm(const ::org::apache::lucene::index::Term &) const;
            PhraseWildcardQuery$Builder addTerm(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::sandbox::search::PhraseWildcardQuery build() const;
            PhraseWildcardQuery$Builder setSlop(jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(PhraseWildcardQuery$Builder);
          extern PyTypeObject *PY_TYPE(PhraseWildcardQuery$Builder);

          class t_PhraseWildcardQuery$Builder {
          public:
            PyObject_HEAD
            PhraseWildcardQuery$Builder object;
            static PyObject *wrap_Object(const PhraseWildcardQuery$Builder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
