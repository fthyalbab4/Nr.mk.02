// rea decompile_all
// name: FUN_005da328
// address: 0x5da328
// body: available
// range: 0x5da328-0x5da42a inclusive
// range: 0x5da445-0x5da507 inclusive
// range: 0x5da522-0x5da579 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005da328(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int local_14;
  uint local_10;
  int local_c;
  int *local_8;

  local_8 = param_2;
  FUN_00409e08(param_4,&DAT_005d5a50);
  cVar1 = FUN_005da028(param_1,param_3,&local_c);
  if ((cVar1 != '\0') && (*(int *)(*(int *)(param_1 + 200) + 4 + local_c * 0xc) != 0)) {
    FUN_00409dfc(param_4,&DAT_005d5a50,1,
                 *(undefined4 *)(*(int *)(param_1 + 200) + 4 + local_c * 0xc));
    local_10 = (uint)(byte)(&DAT_00687c6c)[*(ushort *)(*(int *)(param_1 + 200) + 2 + local_c * 0xc)]
               * *(int *)(*(int *)(param_1 + 200) + 4 + local_c * 0xc);
    if (local_10 < 5) {
      cVar1 = (&DAT_00687c6c)[*(ushort *)(*(int *)(param_1 + 200) + 2 + local_c * 0xc)];
      local_10 = *(uint *)(*(int *)(param_1 + 200) + 8 + local_c * 0xc);
      iVar2 = *(int *)(*(int *)(param_1 + 200) + 4 + local_c * 0xc);
      if (-1 < iVar2 + -1) {
        local_14 = 0;
        do {
          switch(*(undefined2 *)(*(int *)(param_1 + 200) + 2 + local_c * 0xc)) {
          case 1:
          case 2:
          case 6:
          case 7:
            *(uint *)(*param_4 + local_14 * 4) = local_10 & 0xff;
            break;
          case 3:
          case 8:
            *(uint *)(*param_4 + local_14 * 4) = local_10 & 0xffff;
            break;
          case 4:
          case 9:
            *(uint *)(*param_4 + local_14 * 4) = local_10;
          }
          local_10 = local_10 >> (cVar1 * '\b' & 0x1fU);
          local_14 = local_14 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      FUN_0043c854(local_8,0,local_c * 3,
                   *(int *)(*(int *)(param_1 + 200) + 8 + local_c * 0xc) + *(int *)(param_1 + 0xac),
                   0);
      iVar2 = FUN_00409c3c(*param_4);
      if (-1 < iVar2) {
        iVar2 = iVar2 + 1;
        local_14 = 0;
        do {
          (**(code **)(*local_8 + 0xc))
                    (local_8,&local_10,
                     (&DAT_00687c6c)[*(ushort *)(*(int *)(param_1 + 200) + 2 + local_c * 0xc)]);
          switch(*(undefined2 *)(*(int *)(param_1 + 200) + 2 + local_c * 0xc)) {
          case 1:
            local_10 = local_10 & 0xff;
            break;
          case 3:
          case 8:
            if ((*(byte *)(param_1 + 0x48) & 2) == 0) {
              local_10 = local_10 & 0xffff;
            }
            else {
              local_10 = (uint)CONCAT11((char)local_10,(char)(local_10 >> 8));
            }
            break;
          case 4:
          case 9:
            if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
              local_10 = FUN_005d8d84(local_10);
            }
          }
          *(uint *)(*param_4 + local_14 * 4) = local_10;
          local_14 = local_14 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}
