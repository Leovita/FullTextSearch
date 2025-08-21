#ifndef org_apache_lucene_search_grouping_FirstPassGroupingCollector_H
#define org_apache_lucene_search_grouping_FirstPassGroupingCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        class Scorable;
        class ScoreMode;
        namespace grouping {
          class SearchGroup;
          class GroupSelector;
        }
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

          class FirstPassGroupingCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_6ace7785f6353162,
              mid_collect_540b2b23d51b1efd,
              mid_getGroupSelector_22f3218e526beab0,
              mid_getTopGroups_2e794aa7732e7a67,
              mid_scoreMode_45dfdcf7e901559d,
              mid_setScorer_dd42dde4c0a7db1e,
              mid_doSetNextReader_b7b06dce0a4097ed,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FirstPassGroupingCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FirstPassGroupingCollector(const FirstPassGroupingCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            FirstPassGroupingCollector(const ::org::apache::lucene::search::grouping::GroupSelector &, const ::org::apache::lucene::search::Sort &, jint);

            void collect(jint) const;
            ::org::apache::lucene::search::grouping::GroupSelector getGroupSelector() const;
            ::java::util::Collection getTopGroups(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(FirstPassGroupingCollector);
          extern PyTypeObject *PY_TYPE(FirstPassGroupingCollector);

          class t_FirstPassGroupingCollector {
          public:
            PyObject_HEAD
            FirstPassGroupingCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FirstPassGroupingCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FirstPassGroupingCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FirstPassGroupingCollector&, PyTypeObject *);
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
