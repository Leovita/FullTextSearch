#ifndef org_apache_lucene_search_suggest_document_CompletionTokenStream_H
#define org_apache_lucene_search_suggest_document_CompletionTokenStream_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class CompletionTokenStream : public ::org::apache::lucene::analysis::TokenFilter {
             public:
              enum {
                mid_incrementToken_9aa4f33e82ea333f,
                mid_setPayload_920ce0cdf4259cc9,
                mid_toAutomaton_d4cfa49a0a7bdead,
                mid_toAutomaton_8ef8e6f282a9227f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionTokenStream(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionTokenStream(const CompletionTokenStream& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

              jboolean incrementToken() const;
              void setPayload(const ::org::apache::lucene::util::BytesRef &) const;
              ::org::apache::lucene::util::automaton::Automaton toAutomaton() const;
              ::org::apache::lucene::util::automaton::Automaton toAutomaton(jboolean) const;
            };
          }
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
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(CompletionTokenStream);
            extern PyTypeObject *PY_TYPE(CompletionTokenStream);

            class t_CompletionTokenStream {
            public:
              PyObject_HEAD
              CompletionTokenStream object;
              static PyObject *wrap_Object(const CompletionTokenStream&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
