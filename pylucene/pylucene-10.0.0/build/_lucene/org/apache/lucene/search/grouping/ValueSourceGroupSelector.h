#ifndef org_apache_lucene_search_grouping_ValueSourceGroupSelector_H
#define org_apache_lucene_search_grouping_ValueSourceGroupSelector_H

#include "org/apache/lucene/search/grouping/GroupSelector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        namespace grouping {
          class GroupSelector$State;
          class SearchGroup;
        }
      }
      namespace util {
        namespace mutable$ {
          class MutableValue;
        }
      }
      namespace queries {
        namespace function {
          class ValueSource;
        }
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
    class Map;
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

          class ValueSourceGroupSelector : public ::org::apache::lucene::search::grouping::GroupSelector {
           public:
            enum {
              mid_init$_18272dfd6f608e97,
              mid_advanceTo_f1eafbb57835401c,
              mid_copyValue_28c3cf024c0e87ef,
              mid_currentValue_28c3cf024c0e87ef,
              mid_setGroups_40eba2cff967cc45,
              mid_setNextReader_b7b06dce0a4097ed,
              mid_setScorer_dd42dde4c0a7db1e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ValueSourceGroupSelector(jobject obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ValueSourceGroupSelector(const ValueSourceGroupSelector& obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {}

            ValueSourceGroupSelector(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::util::Map &);

            ::org::apache::lucene::search::grouping::GroupSelector$State advanceTo(jint) const;
            ::org::apache::lucene::util::mutable$::MutableValue copyValue() const;
            ::org::apache::lucene::util::mutable$::MutableValue currentValue() const;
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
          extern PyType_Def PY_TYPE_DEF(ValueSourceGroupSelector);
          extern PyTypeObject *PY_TYPE(ValueSourceGroupSelector);

          class t_ValueSourceGroupSelector {
          public:
            PyObject_HEAD
            ValueSourceGroupSelector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ValueSourceGroupSelector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ValueSourceGroupSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ValueSourceGroupSelector&, PyTypeObject *);
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
