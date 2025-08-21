#ifndef org_apache_lucene_search_grouping_SecondPassGroupingCollector_H
#define org_apache_lucene_search_grouping_SecondPassGroupingCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class GroupReducer;
          class SearchGroup;
          class GroupSelector;
        }
        class Scorable;
        class ScoreMode;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class Object;
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
        namespace grouping {

          class SecondPassGroupingCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_dcf9d1d22cc5dacf,
              mid_collect_540b2b23d51b1efd,
              mid_getGroupSelector_22f3218e526beab0,
              mid_scoreMode_45dfdcf7e901559d,
              mid_setScorer_dd42dde4c0a7db1e,
              mid_doSetNextReader_b7b06dce0a4097ed,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SecondPassGroupingCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SecondPassGroupingCollector(const SecondPassGroupingCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            SecondPassGroupingCollector(const ::org::apache::lucene::search::grouping::GroupSelector &, const ::java::util::Collection &, const ::org::apache::lucene::search::grouping::GroupReducer &);

            void collect(jint) const;
            ::org::apache::lucene::search::grouping::GroupSelector getGroupSelector() const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
            void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(SecondPassGroupingCollector);
          extern PyTypeObject *PY_TYPE(SecondPassGroupingCollector);

          class t_SecondPassGroupingCollector {
          public:
            PyObject_HEAD
            SecondPassGroupingCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SecondPassGroupingCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SecondPassGroupingCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SecondPassGroupingCollector&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
