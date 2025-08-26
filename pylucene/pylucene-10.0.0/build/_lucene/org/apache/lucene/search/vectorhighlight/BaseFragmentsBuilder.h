#ifndef org_apache_lucene_search_vectorhighlight_BaseFragmentsBuilder_H
#define org_apache_lucene_search_vectorhighlight_BaseFragmentsBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace vectorhighlight {
          class FieldFragList$WeightedFragInfo;
          class FieldFragList;
          class FragmentsBuilder;
        }
        namespace highlight {
          class Encoder;
        }
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class BaseFragmentsBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_createFragment_a2d41f387a5b193c,
              mid_createFragment_4dcab3d7ada6981c,
              mid_createFragments_a26122dcd96d2912,
              mid_createFragments_aedfd0348ce18a80,
              mid_getMultiValuedSeparator_15a06771db8cb866,
              mid_getWeightedFragInfoList_be19c667f3dea389,
              mid_isDiscreteMultiValueHighlighting_9aa4f33e82ea333f,
              mid_setDiscreteMultiValueHighlighting_f5dd97eebf6a215a,
              mid_setMultiValuedSeparator_121fb0d25559975f,
              mid_discreteMultiValueHighlighting_ab3201ad50fbaee4,
              mid_makeFragment_eb3dfec4f6594cc6,
              mid_getFragmentSourceMSO_7fb298b82ee14d06,
              mid_getPreTag_0da8f0b89b1e9a22,
              mid_getPreTag_15f0b39e938e3224,
              mid_getPostTag_15f0b39e938e3224,
              mid_getPostTag_0da8f0b89b1e9a22,
              mid_getFragmentSource_e61622d3c3a792dd,
              mid_getFields_ae44a444ed0df68d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BaseFragmentsBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BaseFragmentsBuilder(const BaseFragmentsBuilder& obj) : ::java::lang::Object(obj) {}

            static JArray< ::java::lang::String > *COLORED_POST_TAGS;
            static JArray< ::java::lang::String > *COLORED_PRE_TAGS;

            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &) const;
            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            jchar getMultiValuedSeparator() const;
            ::java::util::List getWeightedFragInfoList(const ::java::util::List &) const;
            jboolean isDiscreteMultiValueHighlighting() const;
            void setDiscreteMultiValueHighlighting(jboolean) const;
            void setMultiValuedSeparator(jchar) const;
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
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(BaseFragmentsBuilder);
          extern PyTypeObject *PY_TYPE(BaseFragmentsBuilder);

          class t_BaseFragmentsBuilder {
          public:
            PyObject_HEAD
            BaseFragmentsBuilder object;
            static PyObject *wrap_Object(const BaseFragmentsBuilder&);
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
