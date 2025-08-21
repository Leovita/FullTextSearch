#ifndef org_apache_lucene_search_grouping_DoubleRangeGroupSelector_H
#define org_apache_lucene_search_grouping_DoubleRangeGroupSelector_H

#include "org/apache/lucene/search/grouping/GroupSelector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class DoubleRangeFactory;
          class DoubleRange;
          class GroupSelector$State;
          class SearchGroup;
        }
        class Scorable;
        class DoubleValuesSource;
      }
      namespace index {
        class LeafReaderContext;
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

          class DoubleRangeGroupSelector : public ::org::apache::lucene::search::grouping::GroupSelector {
           public:
            enum {
              mid_init$_458d3e80bf29b4fa,
              mid_advanceTo_f1eafbb57835401c,
              mid_copyValue_9d477ffe0a4e85cd,
              mid_currentValue_9d477ffe0a4e85cd,
              mid_setGroups_40eba2cff967cc45,
              mid_setNextReader_b7b06dce0a4097ed,
              mid_setScorer_dd42dde4c0a7db1e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleRangeGroupSelector(jobject obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleRangeGroupSelector(const DoubleRangeGroupSelector& obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {}

            DoubleRangeGroupSelector(const ::org::apache::lucene::search::DoubleValuesSource &, const ::org::apache::lucene::search::grouping::DoubleRangeFactory &);

            ::org::apache::lucene::search::grouping::GroupSelector$State advanceTo(jint) const;
            ::org::apache::lucene::search::grouping::DoubleRange copyValue() const;
            ::org::apache::lucene::search::grouping::DoubleRange currentValue() const;
            void setGroups(const ::java::util::Collection &) const;
            void setNextReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(DoubleRangeGroupSelector);
          extern PyTypeObject *PY_TYPE(DoubleRangeGroupSelector);

          class t_DoubleRangeGroupSelector {
          public:
            PyObject_HEAD
            DoubleRangeGroupSelector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DoubleRangeGroupSelector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DoubleRangeGroupSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DoubleRangeGroupSelector&, PyTypeObject *);
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
