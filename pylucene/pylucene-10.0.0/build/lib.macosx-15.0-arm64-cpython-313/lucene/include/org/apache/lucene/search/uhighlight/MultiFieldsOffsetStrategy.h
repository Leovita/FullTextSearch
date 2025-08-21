#ifndef org_apache_lucene_search_uhighlight_MultiFieldsOffsetStrategy_H
#define org_apache_lucene_search_uhighlight_MultiFieldsOffsetStrategy_H

#include "org/apache/lucene/search/uhighlight/FieldOffsetStrategy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class OffsetsEnum;
          class UnifiedHighlighter$OffsetSource;
        }
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class MultiFieldsOffsetStrategy : public ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy {
           public:
            enum {
              mid_init$_9425cd4f62c94bce,
              mid_getField_09a7afff1868fc5e,
              mid_getOffsetSource_77a619b338f9ed68,
              mid_getOffsetsEnum_717b49b3028aff18,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiFieldsOffsetStrategy(jobject obj) : ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiFieldsOffsetStrategy(const MultiFieldsOffsetStrategy& obj) : ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy(obj) {}

            MultiFieldsOffsetStrategy(const ::java::util::List &);

            ::java::lang::String getField() const;
            ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$OffsetSource getOffsetSource() const;
            ::org::apache::lucene::search::uhighlight::OffsetsEnum getOffsetsEnum(const ::org::apache::lucene::index::LeafReader &, jint, const ::java::lang::String &) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(MultiFieldsOffsetStrategy);
          extern PyTypeObject *PY_TYPE(MultiFieldsOffsetStrategy);

          class t_MultiFieldsOffsetStrategy {
          public:
            PyObject_HEAD
            MultiFieldsOffsetStrategy object;
            static PyObject *wrap_Object(const MultiFieldsOffsetStrategy&);
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
