#ifndef org_apache_lucene_search_highlight_TokenSources_H
#define org_apache_lucene_search_highlight_TokenSources_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Fields;
        class IndexReader;
        class Terms;
      }
      namespace document {
        class Document;
      }
      namespace analysis {
        class Analyzer;
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class TokenSources : public ::java::lang::Object {
           public:
            enum {
              mid_getAnyTokenStream_ccbdab4aeed17875,
              mid_getAnyTokenStream_a893530d7a35b905,
              mid_getTermVectorTokenStreamOrNull_8163bdb0e5e948ec,
              mid_getTokenStream_6227e01fbf5e3ebf,
              mid_getTokenStream_1a84d0ce0fbbbba3,
              mid_getTokenStream_d57cc3f774773d6b,
              mid_getTokenStream_59a04b9190d36900,
              mid_getTokenStream_ccbdab4aeed17875,
              mid_getTokenStream_7843ef9790bff03f,
              mid_getTokenStreamWithOffsets_a04561e0125fa83d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenSources(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenSources(const TokenSources& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::analysis::TokenStream getAnyTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getAnyTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::document::Document &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTermVectorTokenStreamOrNull(const ::java::lang::String &, const ::org::apache::lucene::index::Fields &, jint);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::Terms &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::Terms &, jboolean);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::document::Document &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::java::lang::String &, const ::org::apache::lucene::index::Fields &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, jint);
            static ::org::apache::lucene::analysis::TokenStream getTokenStreamWithOffsets(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &);
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
          extern PyType_Def PY_TYPE_DEF(TokenSources);
          extern PyTypeObject *PY_TYPE(TokenSources);

          class t_TokenSources {
          public:
            PyObject_HEAD
            TokenSources object;
            static PyObject *wrap_Object(const TokenSources&);
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
