#ifndef org_apache_lucene_search_uhighlight_FieldOffsetStrategy_H
#define org_apache_lucene_search_uhighlight_FieldOffsetStrategy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class OffsetsEnum;
          class UnifiedHighlighter$OffsetSource;
          class UHComponents;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class FieldOffsetStrategy : public ::java::lang::Object {
           public:
            enum {
              mid_init$_04bb0549c47d4303,
              mid_getField_09a7afff1868fc5e,
              mid_getOffsetSource_77a619b338f9ed68,
              mid_getOffsetsEnum_717b49b3028aff18,
              mid_createOffsetsEnumsWeightMatcher_2539b220c696fe2f,
              mid_createOffsetsEnumsForTerms_f874581b9193518d,
              mid_createOffsetsEnumsForAutomata_babc9a6cdf4a1ccf,
              mid_createOffsetsEnumFromReader_a38e21edf1ee8b1d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldOffsetStrategy(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldOffsetStrategy(const FieldOffsetStrategy& obj) : ::java::lang::Object(obj) {}

            FieldOffsetStrategy(const ::org::apache::lucene::search::uhighlight::UHComponents &);

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
          extern PyType_Def PY_TYPE_DEF(FieldOffsetStrategy);
          extern PyTypeObject *PY_TYPE(FieldOffsetStrategy);

          class t_FieldOffsetStrategy {
          public:
            PyObject_HEAD
            FieldOffsetStrategy object;
            static PyObject *wrap_Object(const FieldOffsetStrategy&);
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
