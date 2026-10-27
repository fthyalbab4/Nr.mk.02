// rea decompile_all
// name: FUN_100db200
// address: 0x100db200
// body: available
// range: 0x100db200-0x100db4a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100db200(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  SIZE_T _Size;
  undefined2 uVar3;
  int iVar4;
  void *_Src;
  uint uVar5;
  int iVar6;
  LPVOID lpMem;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *_Dst;
  HANDLE pvVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  SIZE_T SVar19;
  undefined8 uVar20;

  uVar15 = 0xcbf29ce4;
  uVar11 = 0x84222325;
  iVar4 = param_4[2];
  _Src = (void *)param_4[1];
  uVar5 = *(uint *)(param_3 + 8);
  _Size = iVar4 * 8;
  if (iVar4 != 0) {
    pbVar18 = (byte *)((int)_Src + 5);
    SVar19 = _Size;
    do {
      uVar16 = pbVar18[-1] ^ uVar11;
      lVar7 = (ulonglong)uVar16 * 0x1b3;
      uVar12 = (uint)lVar7 ^ (uint)*pbVar18;
      lVar8 = (ulonglong)uVar12 * 0x1b3;
      uVar13 = (uint)lVar8 ^ *(uint *)(pbVar18 + -5);
      pbVar18 = pbVar18 + 8;
      lVar9 = (ulonglong)uVar13 * 0x1b3;
      uVar11 = (uint)lVar9;
      uVar15 = (int)((ulonglong)lVar9 >> 0x20) + uVar13 * 0x100 +
               ((int)((ulonglong)lVar8 >> 0x20) + uVar12 * 0x100 +
               (uVar15 * 0x1b3 + (int)((ulonglong)lVar7 >> 0x20) + uVar16 * 0x100) * 0x1b3) * 0x1b3;
      SVar19 = SVar19 - 8;
    } while (SVar19 != 0);
  }
  if (uVar5 == 0) {
    FUN_10136cc0(&PTR_s_C__Users_runneradmin__cargo_regi_10151d00);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  uVar20 = __aullrem(uVar11,uVar15,uVar5,0);
  uVar11 = (uint)uVar20;
  if (uVar5 <= uVar11) {
    FUN_10136b52(uVar11,uVar5,&PTR_s_C__Users_runneradmin__cargo_regi_10151ce0);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  if ((*(short *)(*(int *)(param_3 + 4) + 0x10 + uVar11 * 0x14) == *(short *)(param_3 + 0x10)) &&
     (iVar1 = *(int *)(param_3 + 4) + uVar11 * 0x14, *(int *)(iVar1 + 8) == iVar4)) {
    if (iVar4 != 0) {
      iVar6 = *(int *)(iVar1 + 4);
      iVar17 = 0;
      do {
        if (((*(char *)(iVar6 + 4 + iVar17 * 8) != *(char *)((int)_Src + iVar17 * 8 + 4)) ||
            (*(char *)(iVar6 + 5 + iVar17 * 8) != *(char *)((int)_Src + iVar17 * 8 + 5))) ||
           (*(int *)(iVar6 + iVar17 * 8) != *(int *)((int)_Src + iVar17 * 8))) goto LAB_100db356;
        iVar17 = iVar17 + 1;
      } while (iVar4 != iVar17);
    }
    param_1[1] = *(undefined4 *)(iVar1 + 0xc);
    *param_1 = 0xfffffffe;
    iVar4 = *param_4;
  }
  else {
LAB_100db356:
    if (iVar4 == 0) {
      _Dst = &DAT_00000004;
    }
    else {
      _Dst = FUN_10107380(0,_Size);
      if (_Dst == (undefined1 *)0x0) {
        FUN_101366bc(4);
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      memcpy(_Dst,_Src,_Size);
    }
    iVar1 = *(int *)(param_2 + 0x18);
    *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + _Size;
    if (iVar1 == *(int *)(param_2 + 0x10)) {
      FUN_10135f30((uint *)(param_2 + 0x10));
    }
    iVar6 = *(int *)(param_2 + 0x14);
    iVar17 = iVar1 * 0x10;
    *(undefined4 *)(iVar6 + iVar17) = 2;
    *(int *)(iVar6 + 4 + iVar17) = iVar4;
    *(undefined1 **)(iVar6 + 8 + iVar17) = _Dst;
    *(int *)(iVar6 + 0xc + iVar17) = iVar4;
    *(int *)(param_2 + 0x18) = iVar1 + 1;
    if ((*(int *)(param_2 + 8) != 1) ||
       (uVar5 = *(uint *)(param_2 + 0xc),
       (uint)((iVar1 + 1) * 0x10 + *(int *)(param_2 + 0x34)) <= uVar5)) {
      if (uVar11 < *(uint *)(param_3 + 8)) {
        uVar3 = *(undefined2 *)(param_3 + 0x10);
        puVar2 = (undefined8 *)(*(int *)(param_3 + 4) + uVar11 * 0x14);
        if (*(int *)(*(int *)(param_3 + 4) + uVar11 * 0x14) != 0) {
          lpMem = *(LPVOID *)((int)puVar2 + 4);
          pvVar14 = GetProcessHeap();
          HeapFree(pvVar14,0,lpMem);
        }
        *(int *)(puVar2 + 1) = param_4[2];
        *puVar2 = *(undefined8 *)param_4;
        *(int *)((int)puVar2 + 0xc) = iVar1;
        *(undefined2 *)(puVar2 + 2) = uVar3;
        param_1[1] = iVar1;
        *param_1 = 0xfffffffe;
        return;
      }
      FUN_10136b52(uVar11,*(uint *)(param_3 + 8),&PTR_s_C__Users_runneradmin__cargo_regi_10151cf0);
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    *param_1 = 0x26;
    param_1[1] = uVar5;
    iVar4 = *param_4;
  }
  if (iVar4 != 0) {
    pvVar14 = GetProcessHeap();
    HeapFree(pvVar14,0,_Src);
  }
  return;
}
