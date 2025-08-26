#ifndef org_apache_lucene_search_highlight_TokenSources_H
#define org_apache_lucene_search_highlight_TokenSources_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class Terms;
        class Fields;
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
      namespace document {
        class Document;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
              mid_getAnyTokenStream_0b579a55b8c22d86,
              mid_getAnyTokenStream_22fdbae987b0037d,
              mid_getTermVectorTokenStreamOrNull_5e9d5582d04eb796,
              mid_getTokenStream_fb6be26bf985cef7,
              mid_getTokenStream_9b0d8d652a4a5e5a,
              mid_getTokenStream_d6a03a6a481140f7,
              mid_getTokenStream_997fb9ab174506d5,
              mid_getTokenStream_0b579a55b8c22d86,
              mid_getTokenStream_e9622b7df0fa8b43,
              mid_getTokenStreamWithOffsets_8fb96d5da7961aad,
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
