#ifndef org_apache_lucene_search_grouping_FirstPassGroupingCollector_H
#define org_apache_lucene_search_grouping_FirstPassGroupingCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class SearchGroup;
          class GroupSelector;
        }
        class ScoreMode;
        class Scorable;
        class Sort;
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
  namespace util {
    class Collection;
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
              mid_init$_17543574e4a66131,
              mid_collect_8226bd0b0fc13dba,
              mid_getGroupSelector_3112688549a3c1ac,
              mid_getTopGroups_92753308dd2e296d,
              mid_scoreMode_23e7061dcdc84768,
              mid_setScorer_c06bdf7d53c6460a,
              mid_doSetNextReader_32243afefe6b151f,
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
