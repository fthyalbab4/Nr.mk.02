// rea decompile_all
// name: FUN_10092720
// address: 0x10092720
// body: available
// range: 0x10092720-0x1009282c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10092720(undefined8 *param_1,uint *param_2,uint param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *lpMem;
  undefined4 uVar3;
  HANDLE pvVar4;
  uint _Size;
  uint uVar5;
  LPVOID lpMem_00;
  undefined8 local_1c;
  uint *local_14;

  if ((param_3 & 1) == 0) {
    *(undefined1 *)param_1 = 0xff;
    local_1c = *param_1;
    local_14 = param_2;
    uVar3 = FUN_10093d70(&local_1c,0x1013f5a8,(ushort *)&DAT_10155922,param_3);
    if ((char)uVar3 == '\0') {
      if ((char)local_1c != '\x03') {
        return;
      }
      lpMem = local_1c._4_4_;
      puVar1 = (undefined4 *)local_1c._4_4_[1];
      lpMem_00 = (LPVOID)*local_1c._4_4_;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(lpMem_00);
      }
      if (puVar1[1] != 0) {
        if (8 < (uint)puVar1[2]) {
          lpMem_00 = *(LPVOID *)((int)lpMem_00 + -4);
        }
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,lpMem_00);
      }
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,lpMem);
      return;
    }
    if ((char)local_1c != -1) {
      *param_1 = local_1c;
      return;
    }
    FUN_101369c0("a formatting trait implementation returned an error when the underlying stream did not"
                 ,0xad,&PTR_s_C__Users_runneradmin__rustup_too_101568f0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar5 = param_2[2];
  _Size = param_3 >> 1;
  if (*param_2 - uVar5 < _Size) {
    FUN_101359e0(param_2,uVar5,_Size,(LPVOID)0x1,1);
    uVar5 = param_2[2];
  }
  else if (_Size == 0) goto LAB_1009279c;
  memcpy((void *)(param_2[1] + uVar5),&DAT_10155922,_Size);
LAB_1009279c:
  *(undefined1 *)param_1 = 0xff;
  param_2[2] = uVar5 + _Size;
  return;
}
