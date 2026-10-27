// rea decompile_all
// name: FUN_100b8200
// address: 0x100b8200
// body: available
// range: 0x100b8200-0x100b83c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b8200(undefined1 *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint _Size;
  void *_Src;
  code *pcVar3;
  undefined1 *_Dst;
  HANDLE hHeap;
  uint uVar4;

  if (*(int *)(param_2 + 0x60) == -1) {
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101505bc);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (*(int *)(param_2 + 300) != -2) {
    *param_1 = 9;
    *(undefined4 *)(param_1 + 1) = 0x45544c50;
LAB_100b8236:
    param_1[0x19] = 0xff;
    return;
  }
  _Size = *(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 0x1a4) < _Size) {
    *param_1 = 0x25;
    goto LAB_100b8236;
  }
  cVar1 = *(char *)(param_2 + 0x19f);
  bVar2 = *(byte *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a4) = *(uint *)(param_2 + 0x1a4) - _Size;
  uVar4 = _Size;
  if (_Size == 0) {
    _Dst = (undefined1 *)0x1;
    if (cVar1 != '\0') goto LAB_100b828e;
LAB_100b82c5:
    if (1 < _Size) {
      if (bVar2 < 0x10) {
        *_Dst = _Dst[1];
        uVar4 = 1;
      }
LAB_100b8351:
      *(uint *)(param_2 + 300) = _Size;
      *(undefined1 **)(param_2 + 0x130) = _Dst;
      *(uint *)(param_2 + 0x134) = uVar4;
      param_1[0x19] = 2;
      return;
    }
    *param_1 = 0xb;
    *(undefined4 *)(param_1 + 4) = 2;
  }
  else {
    _Src = *(void **)(param_2 + 0x14);
    _Dst = FUN_10107380(0,_Size);
    if (_Dst == (undefined1 *)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    memcpy(_Dst,_Src,_Size);
    if (cVar1 == '\0') goto LAB_100b82c5;
LAB_100b828e:
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        if (*(int *)(param_2 + 0x138) == -2) {
          *param_1 = 6;
          *(undefined4 *)(param_1 + 1) = 0x534e5274;
          param_1[0x19] = 0xff;
        }
        else {
          if (*(char *)(param_2 + 0x1a8) == '\0') {
            *(uint *)(param_2 + 300) = _Size;
            *(undefined1 **)(param_2 + 0x130) = _Dst;
            *(uint *)(param_2 + 0x134) = _Size;
            param_1[0x19] = 2;
            return;
          }
          *param_1 = 8;
          *(undefined4 *)(param_1 + 1) = 0x534e5274;
          param_1[0x19] = 0xff;
        }
      }
      else {
        *param_1 = 0x10;
        param_1[1] = cVar1;
        param_1[0x19] = 0xff;
      }
      goto joined_r0x100b82ee;
    }
    if (5 < _Size) {
      if (bVar2 < 0x10) {
        *_Dst = _Dst[1];
        _Dst[1] = _Dst[3];
        _Dst[2] = _Dst[5];
        uVar4 = 3;
      }
      goto LAB_100b8351;
    }
    *param_1 = 0xb;
    *(undefined4 *)(param_1 + 4) = 6;
  }
  *(uint *)(param_1 + 8) = _Size;
  param_1[0x19] = 0xff;
joined_r0x100b82ee:
  if (_Size == 0) {
    return;
  }
  hHeap = GetProcessHeap();
  HeapFree(hHeap,0,_Dst);
  return;
}
