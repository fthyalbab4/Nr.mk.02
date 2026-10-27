// rea decompile_all
// name: FUN_100b7ff0
// address: 0x100b7ff0
// body: available
// range: 0x100b7ff0-0x100b8111 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b7ff0(int param_1,int param_2)

{
  uint _Size;
  void *_Src;
  code *pcVar1;
  LPVOID _Dst;
  HANDLE hHeap;
  uint uVar2;
  byte local_1c;

  if (*(int *)(param_2 + 0x60) == -1) {
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10150144);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (((*(int *)(param_2 + 0x138) != -2) || (*(char *)(param_2 + 0x1a8) != '\0')) ||
     (*(int *)(param_2 + 0x120) != -2)) goto LAB_100b80ec;
  uVar2 = (uint)*(byte *)(param_2 + 0x19f);
  local_1c = 8;
  if (uVar2 != 3) {
    local_1c = (byte)*(undefined4 *)(param_2 + 0x1a0);
  }
  _Size = *(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 0x1a4) < _Size) goto LAB_100b80ec;
  *(uint *)(param_2 + 0x1a4) = *(uint *)(param_2 + 0x1a4) - _Size;
  if (_Size == 0) {
    _Dst = (LPVOID)0x1;
    if (*(int *)(&DAT_1016015c + uVar2 * 4) == 0) goto LAB_100b80a9;
  }
  else {
    _Src = *(void **)(param_2 + 0x14);
    _Dst = FUN_10107380(0,_Size);
    if (_Dst == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    memcpy(_Dst,_Src,_Size);
    if (*(uint *)(&DAT_1016015c + uVar2 * 4) == _Size) {
LAB_100b80a9:
      uVar2 = 0;
      do {
        if (local_1c <= (byte)(*(char *)((int)_Dst + uVar2) - 1U)) goto LAB_100b80d4;
        uVar2 = uVar2 + 1;
      } while (_Size != uVar2);
      *(uint *)(param_2 + 0x120) = _Size;
      *(LPVOID *)(param_2 + 0x124) = _Dst;
      *(uint *)(param_2 + 0x128) = _Size;
      goto LAB_100b80ec;
    }
  }
LAB_100b80d4:
  if (_Size != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,_Dst);
  }
LAB_100b80ec:
  *(undefined1 *)(param_1 + 0x19) = 2;
  return;
}
