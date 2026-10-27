// rea decompile_all
// name: FUN_0059795c
// address: 0x59795c
// body: available
// range: 0x59795c-0x597aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0059795c(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  char extraout_DL;
  char cVar3;
  int *in_FS_OFFSET;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00406510();
    cVar3 = extraout_DL;
  }
  FUN_004c7138(param_1,0);
  if (*PTR_DAT_00688e94 == '\0') {
    param_1[0x14] = 0x2a00d2;
  }
  else {
    param_1[0x14] = 0x2a00c2;
  }
  *(undefined1 *)((int)param_1 + 0x281) = 1;
  param_1[0xa1] = 5;
  param_1[0xb0] = 5;
  param_1[0xa7] = 1;
  param_1[0xa8] = 1;
  param_1[0xac] = 1;
  param_1[0xad] = 0x1f;
  *(undefined4 *)((int)param_1 + 0x31a) = 0xc0;
  param_1[0xa9] = -0xfffff1;
  *(undefined1 *)(param_1 + 0xb1) = 3;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  param_1[0xa4] = 0x40;
  param_1[0xa5] = 0x18;
  *(undefined1 *)(param_1 + 0xbf) = 1;
  *(undefined1 *)(param_1 + 0xa6) = 1;
  iVar1 = FUN_0046f608(0xf0f0f0,0xffffffe7);
  param_1[0xaa] = iVar1;
  param_1[0xab] = 0xffffff;
  *(undefined1 *)((int)param_1 + 0x319) = 1;
  *(undefined1 *)((int)param_1 + 0x2fd) = 0;
  FUN_004bb810(param_1,0xff000005);
  FUN_004bb864(param_1,0);
  FUN_004c48b8(param_1,1);
  iVar2 = param_1[0xb0] * param_1[0xa5];
  (**(code **)(*param_1 + 0x98))
            (param_1,param_1[0x10],param_1[0x11],iVar2,param_1[0xa1] * param_1[0xa4]);
  param_1[0xca] = -1;
  param_1[0xcb] = -1;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  iVar1 = param_1[0x2b];
  *(undefined1 *)(iVar1 + 0x10) = 0x12;
  *(undefined1 *)(iVar1 + 0x11) = 0x1f;
  FUN_0059a6a4(param_1);
  if (cVar3 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = iVar2;
  }
  return param_1;
}
