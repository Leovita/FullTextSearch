#ifndef org_apache_lucene_sandbox_search_PhraseWildcardQuery$Builder_H
#define org_apache_lucene_sandbox_search_PhraseWildcardQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace util {
        class BytesRef;
      }
      namespace search {
        class MultiTermQuery;
      }
      namespace sandbox {
        namespace search {
          class PhraseWildcardQuery;
          class PhraseWildcardQuery$Builder;
        }
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
              mid_init$_a5140b013bba694a,
              mid_init$_2d9cd8e1ad0c179f,
              mid_addMultiTerm_0596f98096be840f,
              mid_addTerm_3909ddd1c0e70142,
              mid_addTerm_9c83aa235d3a1281,
              mid_build_9195d550a78869d4,
              mid_setSlop_8fb0c4c4072845ad,
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
