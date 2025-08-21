#ifndef org_apache_lucene_search_matchhighlight_MatchHighlighter_H
#define org_apache_lucene_search_matchhighlight_MatchHighlighter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class OffsetsRetrievalStrategySupplier;
          class MatchHighlighter$FieldValueHighlighter;
          class MatchHighlighter;
        }
        class IndexSearcher;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class MatchHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c61163c22195f70b,
              mid_init$_ae841180652836bd,
              mid_alwaysFetchFields_ce41e621b30e91b1,
              mid_appendFieldHighlighter_360b1daeba3a4db5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchHighlighter(const MatchHighlighter& obj) : ::java::lang::Object(obj) {}

            MatchHighlighter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::analysis::Analyzer &);
            MatchHighlighter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::search::matchhighlight::OffsetsRetrievalStrategySupplier &);

            void alwaysFetchFields(const JArray< ::java::lang::String > &) const;
            MatchHighlighter appendFieldHighlighter(const ::org::apache::lucene::search::matchhighlight::MatchHighlighter$FieldValueHighlighter &) const;
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
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(MatchHighlighter);
          extern PyTypeObject *PY_TYPE(MatchHighlighter);

          class t_MatchHighlighter {
          public:
            PyObject_HEAD
            MatchHighlighter object;
            static PyObject *wrap_Object(const MatchHighlighter&);
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
