#ifndef org_apache_lucene_search_grouping_ValueSourceGroupSelector_H
#define org_apache_lucene_search_grouping_ValueSourceGroupSelector_H

#include "org/apache/lucene/search/grouping/GroupSelector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class SearchGroup;
          class GroupSelector$State;
        }
        class Scorable;
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
  namespace lang {
    class Object;
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
    class Collection;
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
              mid_init$_835d86704283a594,
              mid_advanceTo_15b8933896566317,
              mid_copyValue_ab99a02747ee80a6,
              mid_currentValue_ab99a02747ee80a6,
              mid_setGroups_b5398b431eb321fb,
              mid_setNextReader_32243afefe6b151f,
              mid_setScorer_c06bdf7d53c6460a,
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
