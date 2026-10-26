// rea decompile_all
// name: FUN_100143e0
// address: 0x100143e0
// body: available
// range: 0x100143e0-0x10014566 inclusive
// range: 0x10014570-0x100148b9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100143e0(char *param_1,undefined4 param_2,int param_3,uint param_4,uint *param_5,int *param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined6 uVar5;
  undefined7 uVar6;
  uint *puVar7;
  LPVOID pvVar8;
  int iVar9;
  HANDLE pvVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uStack_84;
  char cStack_80;
  undefined2 uStack_7f;
  undefined4 uStack_7d;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined2 uStack_77;
  undefined4 uStack_75;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  char cStack_5c;
  undefined2 uStack_5b;
  undefined4 uStack_59;
  undefined4 uStack_55;
  undefined4 uStack_51;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  uint uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_14;

  iStack_28 = (*(code *)0x4ad490)();
  if (iStack_28 != 0) {
    iVar14 = 0;
    uStack_2c = param_2;
    do {
      iVar9 = (*(code *)0x4ad3b4)();
      FUN_10049460(&cStack_80,*(ushort **)(iVar9 + 8));
      if (cStack_80 != -1) {
        uVar6 = CONCAT43(uStack_75,CONCAT21(uStack_77,uStack_78));
        uStack_51 = (undefined4)(CONCAT17(uStack_71,uVar6) >> 0x20);
        uStack_59 = (undefined4)(CONCAT16(uStack_79,CONCAT42(uStack_7d,uStack_7f)) >> 0x18);
        uStack_55._1_3_ = (undefined3)((uint7)uVar6 >> 8);
        uStack_55 = CONCAT31(uStack_55._1_3_,uStack_78);
        *(undefined8 *)(param_1 + 0x18) = uStack_68;
        *(undefined4 *)(param_1 + 0x20) = uStack_60;
        *(undefined8 *)(param_1 + 0x10) = uStack_70;
        *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_51,uStack_55);
        *(ulonglong *)(param_1 + 1) =
             CONCAT17(uStack_78,CONCAT43(uStack_59,(int3)CONCAT42(uStack_7d,uStack_7f)));
        *param_1 = cStack_80;
        return;
      }
      uStack_51 = CONCAT13(uStack_71,uStack_75._1_3_);
      uStack_59 = CONCAT13(uStack_79,uStack_7d._1_3_);
      uStack_55 = (undefined4)
                  (CONCAT17((undefined1)uStack_75,CONCAT25(uStack_77,CONCAT14(uStack_78,uStack_59)))
                  >> 0x20);
      uStack_4c = CONCAT44(uStack_55,uStack_59);
      iVar2 = *(int *)(*(int *)(iVar9 + 0xc) + 4);
      uStack_44 = uStack_51;
      if (iVar2 == 2) {
        cStack_80 = (char)&param_5;
        uStack_7f = (undefined2)((uint)&param_5 >> 8);
        uStack_7d = CONCAT31(0x82740,(char)((uint)&param_5 >> 0x18));
        uStack_79 = 0x10;
        uStack_78 = SUB41(&uStack_4c,0);
        uStack_77 = (undefined2)((uint)&uStack_4c >> 8);
        uStack_75 = CONCAT31(0x922c0,(char)((uint)&uStack_4c >> 0x18));
        uStack_71 = 0x10;
        FUN_10092aa0((undefined8 *)&cStack_5c,param_6,(ushort *)&DAT_1013f506,(uint)&cStack_80);
        puVar7 = param_5;
        if (cStack_5c != -1) {
          *param_1 = '\0';
          *(uint *)(param_1 + 8) = CONCAT13((undefined1)uStack_55,uStack_59._1_3_);
          *(uint *)(param_1 + 4) = CONCAT13((undefined1)uStack_59,CONCAT21(uStack_5b,cStack_5c));
          goto LAB_10014881;
        }
        uVar3 = param_5[2];
        if (*param_5 == uVar3) {
          FUN_101359e0(param_5,uVar3,1,(LPVOID)0x1,1);
        }
        *(undefined1 *)(puVar7[1] + uVar3) = 9;
        puVar7[2] = uVar3 + 1;
        if ((int)uStack_4c != 0) {
          pvVar8 = uStack_4c._4_4_;
          pvVar10 = GetProcessHeap();
          HeapFree(pvVar10,0,pvVar8);
        }
        FUN_100143e0(&cStack_80,iVar9,param_3,param_4,param_5,param_6);
        if (cStack_80 != -1) {
          *(undefined8 *)(param_1 + 0x10) = uStack_70;
          *(undefined4 *)(param_1 + 0x20) = uStack_60;
          *(undefined8 *)(param_1 + 0x18) = uStack_68;
          *(ulonglong *)param_1 =
               CONCAT17(uStack_79,CONCAT43(uStack_7d,CONCAT21(uStack_7f,cStack_80)));
          *(ulonglong *)(param_1 + 8) =
               CONCAT17(uStack_71,CONCAT43(uStack_75,CONCAT21(uStack_77,uStack_78)));
          return;
        }
        uVar3 = param_5[2];
        if (uVar3 != 0) {
          uVar13 = param_5[1];
          uVar11 = 0xffffffff;
          if (*(char *)((uVar13 - 1) + uVar3) < '\0') {
            bVar1 = *(byte *)((uVar13 - 2) + uVar3);
            uVar12 = (uint)bVar1;
            if ((char)bVar1 < -0x40) {
              bVar1 = *(byte *)((uVar13 - 3) + uVar3);
              if ((char)bVar1 < -0x40) {
                iStack_30 = (*(byte *)((uVar13 - 4) + uVar3) & 7) * 0x40;
                uStack_84 = (bVar1 & 0x3f) + iStack_30;
              }
              else {
                uStack_84 = bVar1 & 0xf;
              }
              uVar13 = (uVar12 & 0x3f) + uStack_84 * 0x40;
              uStack_40 = uVar12;
            }
            else {
              uVar13 = uVar12 & 0x1f;
            }
            if ((1 < uVar13) && (uVar11 = 0xfffffffe, 0x1f < uVar13)) {
              uVar11 = uVar13 < 0x400 | 0xfffffffc;
            }
          }
          param_5[2] = uVar11 + uVar3;
        }
      }
      else {
        if (iVar2 != 3) {
          cStack_80 = (char)&uStack_4c;
          uStack_7f = (undefined2)((uint)&uStack_4c >> 8);
          uStack_7d = CONCAT31(0x922c0,(char)((uint)&uStack_4c >> 0x18));
          uStack_79 = 0x10;
          FUN_10093970(&uStack_1c,(ushort *)&DAT_1013f527,(uint)&cStack_80);
          uStack_75 = uStack_14;
          uStack_7d = (undefined4)uStack_1c;
          uStack_79 = (undefined1)((ulonglong)uStack_1c >> 0x20);
          uStack_78 = (undefined1)((ulonglong)uStack_1c >> 0x28);
          uStack_77 = (undefined2)((ulonglong)uStack_1c >> 0x30);
          *param_1 = '\x13';
          *(ulonglong *)(param_1 + 1) =
               CONCAT17(uStack_79,CONCAT43(uStack_7d,CONCAT21(uStack_7f,cStack_80)));
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_14,(int)((ulonglong)uStack_1c >> 0x20));
LAB_10014881:
          if ((int)uStack_4c == 0) {
            return;
          }
          pvVar8 = uStack_4c._4_4_;
          pvVar10 = GetProcessHeap();
          HeapFree(pvVar10,0,pvVar8);
          return;
        }
        uVar3 = *(uint *)(*(int *)(iVar9 + 0xc) + 0xc);
        if (param_4 <= uVar3) {
          FUN_10136b52(uVar3,param_4,&PTR_s_src_save_rs_1013f510);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        FUN_10049460(&cStack_80,*(ushort **)(param_3 + uVar3 * 4));
        if (cStack_80 != -1) {
          uVar6 = CONCAT43(uStack_75,CONCAT21(uStack_77,uStack_78));
          uVar5 = CONCAT42(uStack_7d,uStack_7f);
          uStack_51 = (undefined4)(CONCAT17(uStack_71,uVar6) >> 0x20);
          cStack_5c = (char)uStack_7f;
          uStack_5b = (undefined2)((uint6)uVar5 >> 8);
          uStack_59 = (undefined4)(CONCAT16(uStack_79,uVar5) >> 0x18);
          uStack_55._1_3_ = (undefined3)((uint7)uVar6 >> 8);
          uStack_55 = CONCAT31(uStack_55._1_3_,uStack_78);
          *(undefined8 *)(param_1 + 0x18) = uStack_68;
          *(undefined4 *)(param_1 + 0x20) = uStack_60;
          *(undefined8 *)(param_1 + 0x10) = uStack_70;
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_51,uStack_55);
          *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_78,CONCAT43(uStack_59,(int3)uVar5));
          *param_1 = cStack_80;
          goto LAB_10014881;
        }
        uStack_51 = CONCAT13(uStack_71,uStack_75._1_3_);
        uStack_59 = CONCAT13(uStack_79,uStack_7d._1_3_);
        uStack_55 = (undefined4)
                    (CONCAT17((undefined1)uStack_75,
                              CONCAT25(uStack_77,CONCAT14(uStack_78,uStack_59))) >> 0x20);
        uStack_3c = CONCAT44(uStack_55,uStack_59);
        cStack_80 = (char)&param_5;
        uStack_7f = (undefined2)((uint)&param_5 >> 8);
        uStack_7d = CONCAT31(0x82740,(char)((uint)&param_5 >> 0x18));
        uStack_79 = 0x10;
        uStack_78 = SUB41(&uStack_3c,0);
        uStack_77 = (undefined2)((uint)&uStack_3c >> 8);
        uStack_75 = CONCAT31(0x922c0,(char)((uint)&uStack_3c >> 0x18));
        uStack_71 = 0x10;
        uStack_34 = uStack_51;
        FUN_10092aa0((undefined8 *)&uStack_24,param_6,(ushort *)&DAT_1013f520,(uint)&cStack_80);
        pvVar8 = uStack_3c._4_4_;
        if ((char)uStack_24 != -1) {
          *param_1 = '\0';
          *(undefined4 *)(param_1 + 8) = uStack_20;
          *(undefined4 *)(param_1 + 4) = uStack_24;
          if ((int)uStack_3c != 0) {
            pvVar10 = GetProcessHeap();
            HeapFree(pvVar10,0,pvVar8);
          }
          goto LAB_10014881;
        }
        if ((int)uStack_3c != 0) {
          pvVar10 = GetProcessHeap();
          HeapFree(pvVar10,0,pvVar8);
        }
        if ((int)uStack_4c != 0) {
          pvVar8 = uStack_4c._4_4_;
          pvVar10 = GetProcessHeap();
          HeapFree(pvVar10,0,pvVar8);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iStack_28 != iVar14);
  }
  *param_1 = -1;
  return;
}
