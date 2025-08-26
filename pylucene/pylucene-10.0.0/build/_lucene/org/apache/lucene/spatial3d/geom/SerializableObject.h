#ifndef org_apache_lucene_spatial3d_geom_SerializableObject_H
#define org_apache_lucene_spatial3d_geom_SerializableObject_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class ClassNotFoundException;
  }
  namespace io {
    class IOException;
    class OutputStream;
    class InputStream;
  }
  namespace util {
    class BitSet;
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetObject;
          class SerializableObject;
          class PlanetModel;
          class GeoPolygon;
          class GeoPoint;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class SerializableObject : public ::java::lang::Object {
           public:
            enum {
              mid_readBitSet_6a39a0c06eb821f0,
              mid_readBoolean_5150f36f2bb2fad6,
              mid_readByteArray_db5f9ccfb2d72526,
              mid_readClass_cfb0c9a5fd2ec0fb,
              mid_readDouble_891a5b75bec883ab,
              mid_readHeterogeneousArray_7d6a051d4a07d190,
              mid_readHomogeneousArray_7d6a051d4a07d190,
              mid_readInt_52b5bea06c627486,
              mid_readLong_b8cf0ad69a648259,
              mid_readObject_869d1aac1f1f81f9,
              mid_readObject_453b4eacc197aa13,
              mid_readObject_83fe782244b142d1,
              mid_readObject_7a0482945fdd9b13,
              mid_readPlanetObject_294d0d6665ddf18b,
              mid_readPointArray_f840e293506fff28,
              mid_readPolygonArray_0abc940daa89140d,
              mid_readString_d01a82d36e65c6a5,
              mid_write_fbdd420d6e3d48b2,
              mid_writeBitSet_6d9b39e14e167775,
              mid_writeBoolean_94dfb8c9ea020262,
              mid_writeByteArray_925e7411079e9752,
              mid_writeClass_fb2556918c22e857,
              mid_writeDouble_f6393d31e89d3255,
              mid_writeHeterogeneousArray_4d4d799ef67ec238,
              mid_writeHeterogeneousArray_20d5efdc058e4c63,
              mid_writeHomogeneousArray_4d4d799ef67ec238,
              mid_writeHomogeneousArray_20d5efdc058e4c63,
              mid_writeInt_80e1afe80e1fd04c,
              mid_writeLong_06534b6f172516be,
              mid_writeObject_ce9d0a2d17e5c710,
              mid_writePlanetObject_3c0f58e233dccef7,
              mid_writePointArray_0b3a5a94bd19a99f,
              mid_writePointArray_20d5efdc058e4c63,
              mid_writePolygonArray_47fc5055bba8926a,
              mid_writePolygonArray_20d5efdc058e4c63,
              mid_writeString_dbd9e96eff9ac9b6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SerializableObject(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SerializableObject(const SerializableObject& obj) : ::java::lang::Object(obj) {}

            static ::java::util::BitSet readBitSet(const ::java::io::InputStream &);
            static jboolean readBoolean(const ::java::io::InputStream &);
            static JArray< jbyte > readByteArray(const ::java::io::InputStream &);
            static ::java::lang::Class readClass(const ::java::io::InputStream &);
            static jdouble readDouble(const ::java::io::InputStream &);
            static JArray< SerializableObject > readHeterogeneousArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static JArray< SerializableObject > readHomogeneousArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static jint readInt(const ::java::io::InputStream &);
            static jlong readLong(const ::java::io::InputStream &);
            static SerializableObject readObject(const ::java::io::InputStream &);
            static SerializableObject readObject(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static SerializableObject readObject(const ::java::io::InputStream &, const ::java::lang::Class &);
            static SerializableObject readObject(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static ::org::apache::lucene::spatial3d::geom::PlanetObject readPlanetObject(const ::java::io::InputStream &);
            static JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > readPointArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static JArray< ::org::apache::lucene::spatial3d::geom::GeoPolygon > readPolygonArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static ::java::lang::String readString(const ::java::io::InputStream &);
            void write(const ::java::io::OutputStream &) const;
            static void writeBitSet(const ::java::io::OutputStream &, const ::java::util::BitSet &);
            static void writeBoolean(const ::java::io::OutputStream &, jboolean);
            static void writeByteArray(const ::java::io::OutputStream &, const JArray< jbyte > &);
            static void writeClass(const ::java::io::OutputStream &, const ::java::lang::Class &);
            static void writeDouble(const ::java::io::OutputStream &, jdouble);
            static void writeHeterogeneousArray(const ::java::io::OutputStream &, const JArray< SerializableObject > &);
            static void writeHeterogeneousArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeHomogeneousArray(const ::java::io::OutputStream &, const JArray< SerializableObject > &);
            static void writeHomogeneousArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeInt(const ::java::io::OutputStream &, jint);
            static void writeLong(const ::java::io::OutputStream &, jlong);
            static void writeObject(const ::java::io::OutputStream &, const SerializableObject &);
            static void writePlanetObject(const ::java::io::OutputStream &, const ::org::apache::lucene::spatial3d::geom::PlanetObject &);
            static void writePointArray(const ::java::io::OutputStream &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &);
            static void writePointArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writePolygonArray(const ::java::io::OutputStream &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPolygon > &);
            static void writePolygonArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeString(const ::java::io::OutputStream &, const ::java::lang::String &);
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
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(SerializableObject);
          extern PyTypeObject *PY_TYPE(SerializableObject);

          class t_SerializableObject {
          public:
            PyObject_HEAD
            SerializableObject object;
            static PyObject *wrap_Object(const SerializableObject&);
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
