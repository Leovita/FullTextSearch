#ifndef org_apache_lucene_search_suggest_document_CompletionWeight_H
#define org_apache_lucene_search_suggest_document_CompletionWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class ScorerSupplier;
        namespace suggest {
          namespace document {
            class CompletionQuery;
          }
        }
      }
      namespace util {
        namespace automaton {
          class Automaton;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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
        namespace suggest {
          namespace document {

            class CompletionWeight : public ::org::apache::lucene::search::Weight {
             public:
              enum {
                mid_init$_469a0bff9121f2d7,
                mid_explain_b1310cbadc240f44,
                mid_getAutomaton_d4cfa49a0a7bdead,
                mid_isCacheable_8e9f6225f14d0ebe,
                mid_scorerSupplier_613b85087b5065ab,
                mid_setNextMatch_9b114e5af4494a53,
                mid_boost_8b62236f0e4d0dbc,
                mid_context_f2e5418fe0d66c69,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionWeight(const CompletionWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

              CompletionWeight(const ::org::apache::lucene::search::suggest::document::CompletionQuery &, const ::org::apache::lucene::util::automaton::Automaton &);

              ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
              ::org::apache::lucene::util::automaton::Automaton getAutomaton() const;
              jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
              ::org::apache::lucene::search::ScorerSupplier scorerSupplier(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(CompletionWeight);
            extern PyTypeObject *PY_TYPE(CompletionWeight);

            class t_CompletionWeight {
            public:
              PyObject_HEAD
              CompletionWeight object;
              static PyObject *wrap_Object(const CompletionWeight&);
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
