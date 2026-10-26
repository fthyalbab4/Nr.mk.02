// rea decompile_all
// name: FUN_10136e40
// address: 0x10136e40
// body: available
// range: 0x10136e40-0x10136f4e inclusive
// range: 0x10136f50-0x10137003 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10136e40(uint *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  LPVOID _Dst;
  bool bVar9;
  uint *local_814 [257];
  undefined8 local_410 [128];

  param_1[0x104] = 1;
  uVar3 = param_1[0x103];
  local_814[0] = param_1;
  if (uVar3 == 0xffffffff) {
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10151518);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  param_1[0x103] = uVar3 + 1;
  if (uVar3 == 0) {
    LOCK();
    if (param_1[0x110] == 0) {
      param_1[0x110] = *(uint *)(param_1[1] + 0xc0) | 1;
    }
    UNLOCK();
    uVar3 = param_1[0x105];
    param_1[0x105] = uVar3 + 1;
    if ((uVar3 & 0x7f) == 0) {
      FUN_10137010((uint *)(param_1[1] + 0x40),(int *)local_814);
    }
  }
  uVar3 = param_1[1];
  iVar8 = -0x400;
  do {
    *(undefined8 *)(&stack0xfffffff8 + iVar8) = 0;
    *(undefined8 *)(&stack0xfffffff0 + iVar8) = 0x1009e1b0;
    iVar8 = iVar8 + 0x10;
  } while (iVar8 != 0);
  memcpy(local_814,param_1 + 2,0x404);
  memcpy(param_1 + 2,local_410,0x400);
  param_1[0x102] = 0;
  uVar4 = *(undefined4 *)(uVar3 + 0xc0);
  _Dst = FUN_10107380(0,0x40c);
  if (_Dst == (LPVOID)0x0) {
    FUN_1013679e(4,0x40c);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  memcpy(_Dst,local_814,0x404);
  *(undefined4 *)((int)_Dst + 0x404) = uVar4;
  *(undefined4 *)((int)_Dst + 0x408) = 0;
  do {
    while( true ) {
      uVar5 = *(uint *)(uVar3 + 0x80);
      uVar6 = *(uint *)((uVar5 & 0xfffffffc) + 0x408);
      if (uVar6 < 4) break;
      LOCK();
      if (uVar5 == *(uint *)(uVar3 + 0x80)) {
        *(uint *)(uVar3 + 0x80) = uVar6;
      }
      UNLOCK();
    }
    piVar1 = (int *)((uVar5 & 0xfffffffc) + 0x408);
    LOCK();
    bVar9 = *piVar1 == 0;
    if (bVar9) {
      *piVar1 = (int)_Dst;
    }
    UNLOCK();
  } while (!bVar9);
  LOCK();
  if (uVar5 == *(uint *)(uVar3 + 0x80)) {
    *(uint *)(uVar3 + 0x80) = (uint)_Dst;
  }
  UNLOCK();
  puVar2 = param_1 + 0x103;
  *puVar2 = *puVar2 - 1;
  if ((*puVar2 == 0) && (param_1[0x110] = 0, param_1[0x104] == 0)) {
    FUN_10136e40(param_1);
  }
  param_1[0x104] = 0;
  local_814[0] = (uint *)param_1[1];
  LOCK();
  *param_1 = *param_1 | 1;
  UNLOCK();
  LOCK();
  *local_814[0] = *local_814[0] - 1;
  UNLOCK();
  if (*local_814[0] == 0) {
    FUN_1009dd00((int *)local_814);
  }
  return;
}
