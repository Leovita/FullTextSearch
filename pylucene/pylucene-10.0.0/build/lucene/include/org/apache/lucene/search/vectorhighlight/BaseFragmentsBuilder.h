#ifndef org_apache_lucene_search_vectorhighlight_BaseFragmentsBuilder_H
#define org_apache_lucene_search_vectorhighlight_BaseFragmentsBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldFragList;
          class FragmentsBuilder;
          class FieldFragList$WeightedFragInfo;
        }
        namespace highlight {
          class Encoder;
        }
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
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
        namespace vectorhighlight {

          class BaseFragmentsBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_createFragment_5f1fb189aacdf032,
              mid_createFragment_697d011a2f3d0cf0,
              mid_createFragments_6c2dce9e15f35b36,
              mid_createFragments_72b2a373c3c578d3,
              mid_getMultiValuedSeparator_6c956faefc706166,
              mid_getWeightedFragInfoList_52060c8532319091,
              mid_isDiscreteMultiValueHighlighting_947277eca0748c4e,
              mid_setDiscreteMultiValueHighlighting_b110fc3a58c081ab,
              mid_setMultiValuedSeparator_97f8668422006638,
              mid_discreteMultiValueHighlighting_2175d7fa0fb1c415,
              mid_makeFragment_463a9da089eee419,
              mid_getFragmentSourceMSO_35f1fe0cf947694e,
              mid_getPreTag_cd8436557ab831f9,
              mid_getPreTag_1b44bc32a26f1c02,
              mid_getPostTag_1b44bc32a26f1c02,
              mid_getPostTag_cd8436557ab831f9,
              mid_getFragmentSource_3c2b877274b6b939,
              mid_getFields_5b4f210cf391e536,
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
