#ifndef org_apache_lucene_search_highlight_TokenStreamFromTermVector_H
#define org_apache_lucene_search_highlight_TokenStreamFromTermVector_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class TokenStreamFromTermVector : public ::org::apache::lucene::analysis::TokenStream {
           public:
            enum {
              mid_init$_590e9c9cfbeebeb2,
              mid_getTermVectorTerms_ad5072ef5c5356f6,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenStreamFromTermVector(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenStreamFromTermVector(const TokenStreamFromTermVector& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            TokenStreamFromTermVector(const ::org::apache::lucene::index::Terms &, jint);

            ::org::apache::lucene::index::Terms getTermVectorTerms() const;
            jboolean incrementToken() const;
            void reset() const;
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(TokenStreamFromTermVector);
          extern PyTypeObject *PY_TYPE(TokenStreamFromTermVector);

          class t_TokenStreamFromTermVector {
          public:
            PyObject_HEAD
            TokenStreamFromTermVector object;
            static PyObject *wrap_Object(const TokenStreamFromTermVector&);
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
