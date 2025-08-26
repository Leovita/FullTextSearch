#ifndef org_apache_lucene_search_uhighlight_PostingsWithTermVectorsOffsetStrategy_H
#define org_apache_lucene_search_uhighlight_PostingsWithTermVectorsOffsetStrategy_H

#include "org/apache/lucene/search/uhighlight/FieldOffsetStrategy.h"

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

          class PostingsWithTermVectorsOffsetStrategy : public ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy {
           public:
            enum {
              mid_init$_4b4c5570af772ffe,
              mid_getOffsetSource_e52a710f16ce6a53,
              mid_getOffsetsEnum_5610a28ef32aa7b7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PostingsWithTermVectorsOffsetStrategy(jobject obj) : ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PostingsWithTermVectorsOffsetStrategy(const PostingsWithTermVectorsOffsetStrategy& obj) : ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy(obj) {}

            PostingsWithTermVectorsOffsetStrategy(const ::org::apache::lucene::search::uhighlight::UHComponents &);

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
          extern PyType_Def PY_TYPE_DEF(PostingsWithTermVectorsOffsetStrategy);
          extern PyTypeObject *PY_TYPE(PostingsWithTermVectorsOffsetStrategy);

          class t_PostingsWithTermVectorsOffsetStrategy {
          public:
            PyObject_HEAD
            PostingsWithTermVectorsOffsetStrategy object;
            static PyObject *wrap_Object(const PostingsWithTermVectorsOffsetStrategy&);
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
