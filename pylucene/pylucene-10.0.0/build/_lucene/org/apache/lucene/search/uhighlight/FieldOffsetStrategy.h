#ifndef org_apache_lucene_search_uhighlight_FieldOffsetStrategy_H
#define org_apache_lucene_search_uhighlight_FieldOffsetStrategy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class UHComponents;
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
  namespace lang {
    class Class;
    class String;
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
        namespace uhighlight {

          class FieldOffsetStrategy : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4b4c5570af772ffe,
              mid_getField_e7df854526d67fa3,
              mid_getOffsetSource_e52a710f16ce6a53,
              mid_getOffsetsEnum_5610a28ef32aa7b7,
              mid_createOffsetsEnumsWeightMatcher_c553aa59d95722a3,
              mid_createOffsetsEnumsForTerms_c95a4be727ee3254,
              mid_createOffsetsEnumsForAutomata_1cead45eaa2f79aa,
              mid_createOffsetsEnumFromReader_b3cbaeb75bddb170,
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
