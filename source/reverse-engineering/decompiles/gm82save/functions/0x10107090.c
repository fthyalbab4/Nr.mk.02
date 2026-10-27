// rea decompile_all
// name: FUN_10107090
// address: 0x10107090
// body: available
// range: 0x10107090-0x10107175 inclusive
// range: 0x10107180-0x1010719d inclusive
// range: 0x101071a0-0x101071b0 inclusive
// range: 0x101071c0-0x1010729b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * __cdecl FUN_10107090(undefined8 *param_1,byte *param_2,ushort *param_3,uint param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *lpMem;
  undefined4 uVar3;
  HANDLE pvVar4;
  LPVOID pvVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  byte *local_20;
  ushort *local_1c;
  LPVOID local_18;
  int local_14;

  local_14 = 0x1010709c;
  if ((param_4 & 1) == 0) {
    *(undefined1 *)param_1 = 0xff;
    local_20 = param_2;
    local_28 = *param_1;
    uVar3 = FUN_10093d70(&local_28,0x10156918,param_3,param_4);
    if ((char)uVar3 == '\0') {
      if ((byte)local_28 == '\x03') {
        piVar6 = local_28._4_4_;
        puVar1 = (undefined4 *)local_28._4_4_[1];
        pvVar5 = (LPVOID)*local_28._4_4_;
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)(pvVar5);
        }
        if (puVar1[1] != 0) {
          if (8 < (uint)puVar1[2]) {
            pvVar5 = *(LPVOID *)((int)pvVar5 + -4);
          }
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,pvVar5);
        }
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,piVar6);
      }
    }
    else {
      if ((byte)local_28 == -1) {
        FUN_101369c0("a formatting trait implementation returned an error when the underlying stream did not"
                     ,0xad,&PTR_s_C__Users_runneradmin__rustup_too_101568f0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
LAB_10107263:
      *param_1 = local_28;
    }
  }
  else {
    piVar6 = (int *)(param_4 >> 1);
    local_1c = param_3;
    if (piVar6 != (int *)0x0) {
LAB_10107139:
      FUN_1010be30((char *)&local_28,0xfffffff4,(byte *)local_1c,(LPCSTR)piVar6,param_2);
      lpMem = local_28._4_4_;
      if ((byte)local_28 == 0xff) {
        if (local_28._4_4_ != (int *)0x0) {
          if (piVar6 < local_28._4_4_) {
            FUN_10136a50((uint)local_28._4_4_,(uint)piVar6,(uint)piVar6,
                         &PTR_s_C__Users_runneradmin__rustup_too_101594d0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          local_1c = (ushort *)((int)local_1c + (int)local_28._4_4_);
          piVar6 = (int *)((int)piVar6 - (int)local_28._4_4_);
          goto LAB_10107131;
        }
        puVar7 = (undefined8 *)&DAT_10158308;
        goto switchD_10107166_caseD_1010725f;
      }
      puVar7 = &local_28;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch((&switchD_10107166::switchdataD_1010729c)[(byte)local_28] + local_14) {
      case 0x10107168:
        puVar7 = &local_28;
        if (local_28._1_1_ != '#') break;
LAB_10107131:
        if (piVar6 == (int *)0x0) goto LAB_10107202;
        goto LAB_10107139;
      case 0x101071a0:
        puVar7 = &local_28;
        if ((char)local_28._4_4_[2] == '#') goto LAB_10107131;
        break;
      case 0x101071c0:
        puVar7 = &local_28;
        if ((char)local_28._4_4_[2] == '#') {
          puVar1 = (undefined4 *)local_28._4_4_[1];
          pvVar5 = (LPVOID)*local_28._4_4_;
          if ((code *)*puVar1 != (code *)0x0) {
            local_18 = pvVar5;
            (*(code *)*puVar1)(pvVar5);
            pvVar5 = local_18;
          }
          if (puVar1[1] != 0) {
            if (8 < (uint)puVar1[2]) {
              pvVar5 = *(LPVOID *)((int)pvVar5 + -4);
            }
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,pvVar5);
          }
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,lpMem);
          goto LAB_10107131;
        }
      }
switchD_10107166_caseD_1010725f:
      local_28 = *puVar7;
      goto LAB_10107263;
    }
LAB_10107202:
    *(undefined1 *)param_1 = 0xff;
  }
  return param_1;
}
