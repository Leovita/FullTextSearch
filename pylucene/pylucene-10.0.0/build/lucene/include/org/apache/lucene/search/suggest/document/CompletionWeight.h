#ifndef org_apache_lucene_search_suggest_document_CompletionWeight_H
#define org_apache_lucene_search_suggest_document_CompletionWeight_H

#include "org/apache/lucene/search/Weight.h"

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
      namespace util {
        namespace automaton {
          class Automaton;
        }
      }
      namespace search {
        class Explanation;
        namespace suggest {
          namespace document {
            class CompletionQuery;
          }
        }
        class ScorerSupplier;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
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
                mid_init$_5301f871a7b9a4fe,
                mid_explain_478bccbc961eab03,
                mid_getAutomaton_275570da72a90658,
                mid_isCacheable_03101e9518c66be0,
                mid_scorerSupplier_45b7d9496c5acc93,
                mid_boost_9b6c3480dac00edf,
                mid_setNextMatch_594a6b57786882a9,
                mid_context_373f0038978f926b,
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
