#ifndef org_apache_lucene_search_grouping_SecondPassGroupingCollector_H
#define org_apache_lucene_search_grouping_SecondPassGroupingCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class SearchGroup;
          class GroupSelector;
          class GroupReducer;
        }
        class ScoreMode;
        class Scorable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
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

          class SecondPassGroupingCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_1b29b6e6e054a6bd,
              mid_collect_8226bd0b0fc13dba,
              mid_getGroupSelector_3112688549a3c1ac,
              mid_scoreMode_23e7061dcdc84768,
              mid_setScorer_c06bdf7d53c6460a,
              mid_doSetNextReader_32243afefe6b151f,
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
