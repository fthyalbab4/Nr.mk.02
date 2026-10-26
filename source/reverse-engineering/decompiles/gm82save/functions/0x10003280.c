// rea decompile_all
// name: FUN_10003280
// address: 0x10003280
// body: available
// range: 0x10003280-0x100033bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10003280(undefined8 *param_1,uint param_2,uint param_3)

{
  uint _Size;
  code *pcVar1;
  uint uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  if (param_3 == 0) {
    param_1[1] = 0;
    *param_1 = 0x10159670;
    return;
  }
  if (param_3 < 0xf) {
    uVar4 = 4;
    if (3 < param_3) {
      uVar4 = (param_3 & 8) + 8;
    }
  }
  else {
    if (0x1fffffff < param_3) goto LAB_10003323;
    uVar4 = (param_3 * 8) / 7 - 1;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    uVar4 = (0xffffffffU >> (~(byte)iVar7 & 0x1f)) + 1;
  }
  uVar2 = (uint)((ulonglong)param_2 * (ulonglong)uVar4);
  if (((int)((ulonglong)param_2 * (ulonglong)uVar4 >> 0x20) == 0) && (uVar2 < 0xfffffff1)) {
    _Size = uVar4 + 0x10;
    uVar2 = uVar2 + 0xf & 0xfffffff0;
    uVar5 = _Size + uVar2;
    if (uVar5 < 0x7ffffff1 && !CARRY4(_Size,uVar2)) {
      if (uVar5 == 0) {
        iVar7 = 0x10;
      }
      else {
        pvVar3 = FUN_10107380(0,uVar5 + 0x10);
        if (pvVar3 == (LPVOID)0x0) {
          FUN_1013679e(0x10,uVar5);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *(LPVOID *)(((uint)pvVar3 & 0xfffffff0) + 0xc) = pvVar3;
        iVar7 = ((uint)pvVar3 & 0xfffffff0) + 0x10;
      }
      iVar6 = (uVar4 & 0xfffffff8) - (uVar4 >> 3);
      if (uVar4 < 9) {
        iVar6 = uVar4 - 1;
      }
      memset((void *)(iVar7 + uVar2),0xff,_Size);
      *(void **)param_1 = (void *)(iVar7 + uVar2);
      *(uint *)((int)param_1 + 4) = uVar4 - 1;
      *(int *)(param_1 + 1) = iVar6;
      *(undefined4 *)((int)param_1 + 0xc) = 0;
      return;
    }
  }
LAB_10003323:
  FUN_101369c0("Hash table capacity overflowC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hashbrown-0.17.1\\src\\raw.rs"
               ,0x39,&DAT_1014f65c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
